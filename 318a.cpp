#include<iostream>
using namespace std;
main()
{
    int n,k,ans;
    cin>>n>>k;

    if(n%2==0)
    {
        if(k<=n/2)
        {
            ans=2*k-1;
        }
        else
            ans= 2+(k-(n/2)-1)*2;
    }
    else
    {
        if(k<=(n/2+1))
        {
            ans=2*k-1;
        }
        else
        {
            ans= 2+(k-(n/2+1)-1)*2;
        }
    }
    cout<<ans<<endl;


return 0;
}
