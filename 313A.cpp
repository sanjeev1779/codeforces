#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#include<iostream>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
    LL ans,op1,op2;
    cin>>ans;
    if(ans>0)
        cout<<ans<<endl;
    else
    {
        op1=ans/10;
        op2=ans/100;
        op2=op2*10+ans%10;
        if(op2>op1)
            cout<<op2<<endl;
        else
            cout<<op1<<endl;
    }
return 0;
}
