#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N)
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
          freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
        // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
        int n,i,j,k,q,L;
        int a[102];
        while(S(n)!='\0')
        {
            for(int i=0;i<n;i++)
                S(a[i]);
            int dp[n+1][n+1];
            for( i=1;i<=n;i++)
                dp[i][i]=0;

                for (L=2; L<n; L++)
                {
                    for (i=1; i<=n-L+1; i++)
                    {
                        j = i+L-1;
                        dp[i][j] = INT_MAX;
                        for (k=i; k<=j-1; k++)
                        {
                            // q = cost/scalar multiplications
                            q = dp[i][k] + dp[k+1][j] + a[i-1]*a[k]*a[j];
                            if (q < dp[i][j])
                                dp[i][j] = q;
                        }
                    }
                }
            cout<<dp[1][n-1];

        }


return 0;
}
