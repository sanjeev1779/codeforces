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
    int n,i;
    cin>>n;
    int a[n+2];
    int cnt=0;
    for(i=0;i<n;i++)
    {

        S(a[i]);
        if(a[i]==i)
          {
                cnt++;
                a[i]=-1;
          }
    }

    int flag=0;
    int temp;
    for(i=0;i<n;i++)
    {
                temp=a[i];
                if(a[temp]==i)
                {
                    flag=1;
                    break;
                }
    }
    int flag1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {

            flag1=1;
            break;
        }
   }
    if(flag1==0)
        cout<<cnt<<endl;
    else
    {
    if(flag==1)
        cnt=cnt+2;
    else
            cnt++;
    cout<<cnt<<endl;
    }

return 0;
}
