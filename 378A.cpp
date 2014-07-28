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
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       int a,b,first=0,sc=0,draw=0,i;
       cin>>a>>b;
       for(i=1;i<=6;i++)
       {
           if( abs(i-a)<abs(i-b))
                first++;
           if( abs(i-a)>abs(i-b))
            sc++;
           else if( abs(i-a)==abs(i-b))
                draw++;
       }
       printf("%d %d %d\n",first,draw,sc);


return 0;
}
