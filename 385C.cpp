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
vector<int>vec[1000];
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       int n,m;
       S(n);

       for(i=1;i<=n;i++)
       {
           S(x);
           for(j=1;j*j<=x;j++)
           {
               while(x%j==0)
               {
                    vec[j]++;
                    x/=j;
               }
           }
           if(j!=1)
           {

           }
       }


return 0;
}
