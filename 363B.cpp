#include<climits>
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
#define mp make_pair
using namespace std;
main()
{
    int N,K,i;
    cin>>N>>K;
    int x;
    LL sum[N+2];
    memset(sum,0,sizeof(sum));
    sum[0]=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&x);
        sum[i]=sum[i-1]+x;
    }
    LL minm=sum[K];
    int ans=1;

    for(i=K+1;i<=N;i++)
    {
        LL y=(sum[i]-sum[i-K]);
    //cout<<y<<endl;

        if(y<=minm)
        {
            minm=y;
            ans=i-K+1;
        }
    }
    printf("%d\n",ans);
return 0;
}
