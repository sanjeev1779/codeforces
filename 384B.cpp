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
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    int n,m,k,i,j;
    cin>>n>>m>>k;
    int a[n+2][m+2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    LL ans=(m*(m-1)/2);
    cout<<ans<<endl;
    if(k==0){
    for(i=1;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        {
            printf("%d %d\n",i,j);
        }
    }
    }
    else
    {
         for(i=m;i>=2;i--)
        {
            for(j=i-1;j>=1;j--)
            {
                printf("%d %d\n",i,j);
            }
        }
    }


return 0;
}
