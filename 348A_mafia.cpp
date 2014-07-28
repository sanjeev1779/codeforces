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
    int n;
    LL x;
    S(n);
    LL sum=0;
    LL maxm=-1,avg,ans;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&x);
        sum+=x;
        maxm= max(maxm,x);
    }
  //  cout<<sum<<endl;
    avg = ceil(  sum*1.0/ (n-1)*1.0 );
    //cout<<avg<<endl;
    ans= max(avg,maxm);
    cout<<ans<<endl;




return 0;
}
