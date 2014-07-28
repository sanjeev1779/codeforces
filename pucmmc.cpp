#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long int
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (i=a;i<=b;i++)
#define mem(a,val) memset(a,val,sizeof(a))
using namespace std;
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
main()
{
         // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
      // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
      int i,j,t,n;
      S(n);
      int a[n+2];
      int minm=205;
      int maxm=-1;
      FOR(i,1,n)
      {
         S(a[i])
         minm= min(minm,a[i]);
         maxm= max(maxm,a[i]);
      }
      if(maxm==0)
      {
          printf("0\n"); return 0;
      }
      if(maxm>=n)
      {printf("-1\n"); return 0;}
    int white=0,black=0;
      for(i=1;i<=n;i++)
      {
          if(a[i]==minm) white++;
          if(a[i]==minm+1)black++;
      }
     // P(white)P(black)
      if(white+black!=n || white!=minm+1)
      {
          printf("-1\n"); return 0;
      }
      printf("%d\n",white);

return 0;
}
