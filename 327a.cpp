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
    int n,i,j,p,ans,k;
    int a[102];
    int b[102];
    cin>>n;
    int maxm=0;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

   for(i=0;i<n;i++)
   {
       for(j=n-1;j>=i;j--)
       {
           ans=0;
           for(k=i;k<=j;k++)
                b[k]= 1-a[k];

           for(p=0;p<i;p++)
                ans= ans+a[p];
           for(p=i;p<=j;p++)
                    ans+= b[p];
           for(p=j+1;p<n;p++)
                ans+= a[p];
           maxm= max(ans,maxm);
       }

   }
   cout<<maxm<<endl;
return 0;
}
