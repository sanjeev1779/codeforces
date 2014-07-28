#include<iostream>
#include<stdio.h>
#include<math.h>
#define LL long long
using namespace std;
main()
{
    LL n,x,y,i;
    LL sum_tot1,sum2_tot,ans;
    cin>>n;
    LL a[n+3];
    LL sum=0;
    for(i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cin>>x>>y;
    sum_tot1=0;
    int flag=0;
    for(i=1;i<=n;i++)
    {
        sum_tot1+=a[i];
        sum2_tot=sum-sum_tot1;
        if(sum_tot1>=x && sum_tot1<=y && sum2_tot<=y && sum2_tot>=x)
        {
            flag=1;
            ans=i+1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<ans<<endl;
    }
    else
        cout<<"0\n";
return 0;
}
