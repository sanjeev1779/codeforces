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
LL gcd(LL a, LL b){ LL temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       int t;
       S(t);
       LL a,b,n,k1,k2,tak,maxm;
       while(t--)
       {
           int ans=0;
           cin>>n>>a>>b;
        //   if( (a+b) >n && n%a!=0 && n%b!=0) cout<<"No\n";

               k1= n/a; k2=n/b;

               while(k2>0)
               {
                    if((n-b*k2 )>=0 && (n-b*k2 )%a==0)
                    {
                        ans=1; break;
                    }
                    k2--;
               }
               if(ans==1) printf("Yes\n");
               else printf("No\n");
       }
return 0;
}
