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
    LL i,n;
    LL x;
    LL maxm=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        maxm= max(maxm,x);
    }
    //cout<<maxm<<endl;
     x=(maxm-n);
    if( x%2==1)
        cout<<"Alice\n";
    else
        cout<<"Bob\n";


return 0;
}
