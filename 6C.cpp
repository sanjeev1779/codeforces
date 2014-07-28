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
#define SL(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    int n,ans,j;
    LL sum1=0,sum2;
    cin>>n;
    int i,a[n+4];
    for(i=1;i<=n;i++)
        cin>>a[i];
    i=1;
    j=n;
    while(1)
    {
        if(i==j)
        {
            if(sum1<=sum2)
            {
                ans=i+1;
            }
            else ans=i;
            break;
        }
        sum1+= a[i];
        sum2+=a[j];
        if(sum1<=sum2)
        {
            i++;
        }
        else if(sum1>=sum2)
        {
            j++;
        }
    }
    cout<<ans<<" "<<(n-ans);
return 0;
}
