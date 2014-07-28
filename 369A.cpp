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
    int n,m,k,x,i;
    cin>>n>>m>>k;
    int ans=0;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
        {
            if(m>0)
            {
                m--;
            }
            else ans++;
        }
        else
        {
            if(k>0)
            {
                k--;
            }
            else if(m>0)
                m--;
            else ans++;
        }
    }
    cout<<ans<<endl;
return 0;
}
