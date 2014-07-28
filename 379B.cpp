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

       int a,b;
       S(a)
       S(b)
       int ans=a;
       while(a/b>0)
       {
           ans+=a/b;
           a=a/b+a%b;
       }
       P(ans);

return 0;
}
