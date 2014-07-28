// codeforces
#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       int n,i,x,y;
       cin>>n;
       int fx[105], fy[105];
       memset(fx,0,sizeof(fx));
       memset(fy,0,sizeof(fy));
       while(n--)
       {
           cin>>x>>y;
           fx[x]++;
           fy[y]++;
       }
       int cntx=0,cnty=0;
       for(i=0;i<=100;i++)
       {
           if(fx[i]>0)
            cntx++;
           if(fy[i]>0)
            cnty++;
       }
       int ans= min(cntx,cnty);
       cout<<ans<<endl;


return 0;
}
