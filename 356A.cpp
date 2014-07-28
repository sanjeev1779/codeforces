#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include<math.h>
#define LL long long
#define P(n) printf("%d\n",n)
#define S(n) scanf("%d",&n)
using namespace std;
main()
{
    LL n,x,y,i;
    LL sum1,sum2,ans;
    cin>>n;
    LL a[n+3];
    LL sum=0;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cin>>x>>y;
    sort(a,a+n);
    sum1=0;
    int flag=0;
    for(i=0;i<n;i++)
    {
        sum1+=a[i];
        sum2=sum-sum1;
        ///cout<<sum1; cout<<sum2;
        if(sum1>=x && sum1<=y && sum2<=y && sum2>=x)
        {
            flag=1;
            ans=a[i];
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
