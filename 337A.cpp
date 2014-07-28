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

    int n,m;
    cin>>n>>m;
    int a[51];
    for(int i=0;i<m;i++)
    {
        S(a[i]);
    }
    sort(a,a+m); // 5 7 10 10 12 22
    int minm= 10002;
    for(int i=0;i<=m-n;i++)
    {
        minm= min(minm,a[i+n-1]-a[i]);
    }
    cout<<minm;
return 0;
}
