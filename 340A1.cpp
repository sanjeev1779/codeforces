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
    int a,b,x,y;
    cin>>x>>y>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++)
    {
        if(i%x==0 && i%y==0)
            ans++;
    }
        cout<<ans<<endl;

return 0;
}
