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
    LL n,k,fi,ti,enjoy,ans,i;
    cin>>n>>k;

    cin>>fi>>ti;
        if(k>=ti)
        {
            enjoy= fi;
        }
        else
            enjoy= fi-ti+k;
    ans=enjoy;
    for(i=1;i<n;i++)
    {
        cin>>fi>>ti;
        if(k>=ti)
        {
            enjoy= fi;
        }
        else
            enjoy= fi-ti+k;

        if(enjoy>=ans)
            ans=enjoy;

    }
    cout<<ans<<endl;

return 0;
}
