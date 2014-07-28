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
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
using namespace std;
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
main()
{
         // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
      // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
      int t,i,N,l,M;
      S(t);
      string str;
      while(t--)
      {
            cin>>str;
            S(M);
            l= str.size();
            int dp[l+10];
            dp[0]=0;
            for(i=1;i<=l;i++)
            {
                if(str[i-1]=='B')
                    dp[i] =dp[i-1]+1;
                else dp[i] =dp[i-1];
            }
            int ans= INT_MAX;
            for(i=1;i<=l-M+1;i++)
            {
                ans= min(ans, dp[i+M-1]-dp[i-1]);
            }
            P(ans);

      }

return 0;
}
