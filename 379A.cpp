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
        int a,b;
        cin>>a>>b;
        int ans=a;
        int rem=a/b;
        int x=a%b;
        while(rem>0)
        {
            ans+=rem;
            x+=rem%b;
            rem=rem/b;
            if(x>=b)
            {
                ans+=x/b;;
                //x=x/b;
                x=x%b;
            }
        }
         if(x>=b)
            {
               ans+=x/b;;
            }
        cout<<ans<<endl;
return 0;
}
