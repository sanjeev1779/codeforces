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
    int n,i,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        x--;
        if(x>0)
        {
            a[x-1]=a[x-1]+ (y-1);
            a[x+1]=a[x+1]+ (a[x]-y);
            a[x]=0;
        }
        else
        {
            a[x+1]=a[x+1]+ (a[x]-y);
             a[0]=0;
        }
    }

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

return 0;
}
