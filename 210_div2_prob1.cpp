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
    int n,k,i,sum1,j;
    S(n);S(k);
    int last=0,first=0;
    int freq=k/n;
    for(i=1;i<n;i++)
    {
        sum1=0;
       for(j=1;j<n;j++)
       {
            printf("%d ",freq);
            sum1+=freq;
       }
       printf("%d\n",k-sum1);
       last+=(k-sum1);
    }
    for(i=1;i<=n-1;i++){
        int y= k-(n-1)*freq;
        printf("%d ",y);
        first+= y;
    }
    int x= k-first;
    printf("%d\n",x);
return 0;
}
