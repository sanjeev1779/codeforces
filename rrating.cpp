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
#define pb push_back
using namespace std;
main()
{
    int N,q,elem;
    LL x,ans,l;
    S(N);
    vector<int>vect;
    while(N--)
    {
        S(q);

        if(q==1)
        {
             scanf("%lld",&x);
            vect.pb(x);
        }
        else
        {
            l = vect.size();
            elem= l/3;
            sort(vect.begin(),vect.end());
            if(elem>0)
            {
                ans= vect[l-elem];
                printf("%lld\n",ans);
            }
            else
                printf("No reviews yet\n");
        }
    }

return 0;
}
