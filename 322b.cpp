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
        LL r,g,b,ans,ans1,maxm;
        LL rem1,rem2,rem3;
        LL a[3]={0};
        ans=0;
        cin>>r>>g>>b;
        a[0]=r;
        a[1]=g;
        a[2]=b;
        sort(a,a+3);
        a[1]=a[1]-a[0];
        a[2]=a[2]-a[0];
        ans= ans+ a[0];
        ans=ans+ a[1]/3+ a[2]/3;

        rem1= a[0]%3;
        rem2=a[1]%3;
        rem3= a[2]%3;
        maxm= min(rem1,rem2);
        maxm=min(maxm,rem3);
        ans1= a[0]/3 +a[1]/3+ a[2]/3+ maxm;
        ans= max(ans,ans1);
        cout<<ans<<endl;

return 0;
}
