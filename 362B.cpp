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
    int m,i;
    LL n,a[3005];
    cin>>n>>m;
    int flag=0;
    for(i=1;i<=m;i++)
        {
            cin>>a[i];
            if(a[i]==1 || a[i]==n)
                flag=1;
        }
        if(flag)
        {
            printf("NO\n");
            return 0;
        }
        flag=0;
    sort(a,a+m+1);

    for(i=1;i<=m-2;i++)
    {
        if(a[i+1]==a[i]+1 && a[i+2]==a[i]+2)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("YES\n");
    else printf("NO\n");
return 0;
}
