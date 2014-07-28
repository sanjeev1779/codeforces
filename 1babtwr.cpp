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
struct tower
{
    int h,w,d;
};
bool cmp(tower a, tower b)
{
    //if(a.w<=b.w && a.d<=b.d)return false;
    if(a.w*a.d < b.w*b.d )return false;
    return true;
}
main()
{
          freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
      // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
      int i,j,t,x,y,z,n;
      while(1)
      {
          S(n);
          if(n==0)return 0;
          tower ar[3*n+5];
          int k=1;
          //n=3*n;
          //P(n);
          for(i=0;i<n;i++)
          {
              scanf("%d %d %d",&x,&y,&z);
              ar[k].h=x; ar[k].w= max(y,z); ar[k].d=min(y,z); k++;
              ar[k].h=y; ar[k].w= max(x,z); ar[k].d=min(x,z); k++;
              ar[k].h=z; ar[k].w= max(y,x); ar[k].d=min(y,x); k++;
          }
          n*=3;
          for(i=1;i<=n;i++)
                printf("%d ",ar[i].h);
                 printf("\n");
          sort(ar+1,ar+n+1,cmp);
          LL lis[n+5],ans=0;
          for(i=1;i<=n;i++) {
                printf("%d ",ar[i].h);
            lis[i]= ar[i].h;
          }
          printf("\n");

          for(i=1;i<=n;i++)
          {
              for(j=1;j<i;j++)
              {
                  if(ar[i].w>ar[j].w && ar[i].d>ar[j].d)
                  {
                      lis[i]=max(lis[i],lis[j]+ar[i].h);
                  }
              }
              ans= max(ans,lis[i]);
          }
          cout<<ans<<endl;
      }
return 0;
}
