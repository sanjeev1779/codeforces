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
    LL n,q,i,sum=0,j,l,r,diff;
    cin>>n>>q;
    LL a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<q;i++)
    {
      cin>>l>>r;
      diff= r-l+1;
      for(j=n-1;j>=n-diff;j--)
        sum=sum+a[j];

    }
    cout<<sum<<endl;

return 0;
}
