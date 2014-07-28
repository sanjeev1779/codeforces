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
    LL n,k,i,num,j,flag;
    cin>>n;
    k=1;
    LL a[n];
    a[0]=3;
    num=3;
    while(k<n)
    {
        flag=0;
        num=num+2;
        for(j=0;j<k;j++)
        {
            if(num%a[j]== 0)
               {
                   flag=1;
                   break;
                }
        }
        if(flag==0)
        {
            a[k]=num;
            k++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",a[i]);
return 0;
}
