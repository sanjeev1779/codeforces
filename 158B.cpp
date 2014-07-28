#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;
main()
{
    int i,n,s,ans;
    cin>>n;
    int a[5];
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>s;
        a[s]++;
    }
//1 2 4 3 3
    ans= a[4];
    if(a[2]%2==0)
        ans=ans+ a[2]/2;
    else
        {
            ans=ans+a[2]/2 +1;
            a[1]=a[1]-2;
        }


      ans=ans+ a[3];

      if(a[1]>0)
      {
        a[1]=a[1]-a[3];
      }
      if(a[1]>0)
      {
        ans=ans+ ceil( (floor) (a[1])/4 );
      }

      cout<<ans<<endl;

return 0;
}
