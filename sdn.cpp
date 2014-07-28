#include<iostream>
#include<cmath>
#include<stdio.h>
typedef unsigned long long int ll;
using namespace std;

ll pow1(int a,int b)
{
    ll prod=1;
    for(int i=1;i<=b;i++)
    {
        prod=prod*a;
    }
    return prod;
}
int count(ll m)
{
    int cnt = 0;

    while(m!=0)
    {
        cnt++;
        m /= 10;
    }
return cnt;
}

int main()
{
   // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
    ll w,m,k;
    cin >> w >> m >> k;
    ll ans = 0;
    int dig = count(m);

    while(1)
    {
        ll num = pow1(10,dig);
       // cout<<w<<"  "<<((num-m)*dig*k)<<endl;
        if(w >= ((num-m)*dig*k))
        {
            ans += (num-m);
           // cout<<num<<"  "<<m<<"  "<<(num-m)<<endl;
            w = w-((num-m)*dig*k);
            m = num;
        }
        else
        {
            ans += (w/(k*dig));
            break;
        }
        dig++;
    }
    cout << ans << endl;

return 0;
}
