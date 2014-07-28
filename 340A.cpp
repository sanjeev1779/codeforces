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
//4 6 20 201
LL gcd(LL a, LL b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
using namespace std;
main()
{
   LL x,y,a,b,ans;
    cin>>x>>y>>a>>b;
    int c= gcd(x,y);
int cd= (x*y)/c;
//cout<<cd<<endl;
    double n= ceil(( (double)a)/(double)cd);
    a= n*cd;
    //cout<<a<<endl;
    ans=(b-a+cd)/(cd);
    cout<<ans<<endl;

return 0;
}

