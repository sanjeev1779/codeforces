#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#define LL long long
using namespace std;
main()
{
    LL n,m,a,ans;
    cin>>n>>m>>a;
    ans= ceil( (floor) (n)/ (floor)(a)) * ceil( (floor) (m )/ (floor) (a) );
    cout<<ans<<endl;

return 0;
}
