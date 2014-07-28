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
#define mp make_pair
using namespace std;
vector<int>v;

int fast_mod_pow(int a, int b)
{
    int prod=1;
    while(b>0)
    {
        if(b%2)
            prod=(prod*a);
        a=a*a;
        b/=2;
    }
    return prod;
}
main()
{
    int n,ans,i;
    double x;
    while(1)
    {
        S(n);
        if(n!=0)
        {
            x=log(n)*1.0/log(2)*1.0;
            x=(int)x;
            //cout<<x<<endl;
            ans= (n-fast_mod_pow(2,x))*2;
            if(ans==0)
                ans=n;
           printf("%d\n",ans);

        }
        else
            break;
    }

return 0;
}
