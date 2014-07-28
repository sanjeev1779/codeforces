#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);

        int n;cin>>n;
        LL a[n+3];
        LL ans,xo;
        int i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        LL ans1= INT_MIN;
        for(i=0;i<n;i++)
        {
            xo= a[i];
            ans= xo;
            for(j=i+1;j<n;j++)
            {
                xo= xo^a[j];
                ans= max(ans, xo);
            }
            ans1= max(ans1,ans);
        }
        cout<<ans1<<endl;
return 0;
}
