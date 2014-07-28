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
    int x,y;
    cin>>x;
    vector<int>vec;
    while(x--)
    {
        cin>>y;
        vec.pb(y);
    }
    int idx= upper_bound(vec.begin(),vec.end(),1000)- lower_bound(vec.begin(),vec.end(),2);
    cout<<idx<<endl;
return 0;
}
