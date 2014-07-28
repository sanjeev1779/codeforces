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
    S(N);S(K);
    int arr[100005];
    memset(arr,0,sizeof(arr));
    if(K==N)
        printf("-1\n");
    else
    {
        for(i=1;i<=K+1;i++)
        {
            arr[i]=i; // K numbers
        }
        if(N>=K+2)
        {
            arr[K+2]=1;
            for(i=K+3;i<=N;i++)
                arr[i]=(i-1);
            arr[1]=N;
        }

        for(i=1;i<=N;i++)
            printf("%d ",arr[i]);
    }
return 0;
}
