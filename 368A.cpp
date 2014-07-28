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
    int n,m,k,x,s,i,f,left1=0;
    cin>>n>>m>>k;
    int ans=0;
    f=0;
    s=0;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
            f++;
        else
            s++;
    }

    if(m>=f)
    {
        left1 = m-f;
    }
    else
        ans+=f-m;
    //cout<<ans<<endl;
    int tot_left1=0;
    tot_left1= left1+k;
   // cout<<tot_left1<<endl;
    if(tot_left1>=s)
    {
        ans+=0;
    }
    else ans+= s-tot_left1;
    cout<<ans<<endl;
return 0;
}
