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
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    int n,i,ans;
    cin>>n;
    LL a[n+3];
    for(i=0;i<n;i++)
        cin>>a[i];
    int flag=0;
    if(n<=2)
        ans=-1;

    else
    {
        if(a[0]>=a[n-1]) // decreaing order
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                   {
                       cout<<a[i]<<" "<<a[i+1];
                       flag=1; break;
                   }
            }
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]<a[i+1])
                   {
                       cout<<a[i]<<" "<<a[i+1];
                       flag=1; break;
                   }
            }
        }
    }
    if(flag==0)
        cout<<"-1"<<endl;

return 0;
}
