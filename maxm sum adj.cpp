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
       int i,n;
       cin>>n;
       int x;
        cin>>x;

       int incl=x,incl_new;
       int excl=0;
       for(i=1;i<n;i++)
       {
           cin>>x;
           incl_new= excl+x; // including dis value
           excl= max(incl,excl);
           incl=incl_new;
       }
       cout<<max(incl,excl)<<endl;
return 0;
}
