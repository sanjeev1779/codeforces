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
    int i,n;
    int a[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        S(a[i]);
    }
    sort(a,a+n);
    printf("%d ",a[n-1]);
    for(i=1;i<=n-2;i++)
    {
         printf("%d ",a[i]);
    }
    printf("%d\n",a[0]);

return 0;
}
