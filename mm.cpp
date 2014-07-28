// codeforces
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

 int a[10010];
   int b[10010];
   main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    int n,m,i,x;
    cin>>n>>m;

    memset(a,0,sizeof(a));

    memset(b,0,sizeof(b));
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=1;i<=m;i++)
    {
        cin>>x;
        b[x]++;
    }
    int ans=0;
    for(i=0;i<=1000000;i++)
    {
        if(a[i]>0 && b[i]==0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

return 0;
}
