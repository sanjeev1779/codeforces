#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long int
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define pb push_back
using namespace std;

long int euler[10000];
LL fi(long int n)
{
       LL result = n;
       for(LL i=2;i*i <= n;i++)
       {
         if (n % i == 0) result -= result / i;
         while (n % i == 0) n /= i;
       }
       if (n > 1) result -= result / n;
       return result;
}

void precompute()
{
    euler[0]=-1.5;
    euler[1]=0;
    euler[2]=1;
    //cout<<fi(10000000);
    for(LL i=3;i<10000;i++)
    {
        euler[i]=euler[i-1]+fi(i);
    }
}

main()
{
    precompute();
    LL i,ans;
    int test_cases;
    S(test_cases);
    for(i=1;i<100;i++)
    {
        cout<<i<<" : "<<euler[i]<<endl;
    }
    while(test_cases--)
    {
        scanf("%ld",&i);
        i= rand()%10000;
        cout<<"i: "<<i<<endl;
        ans= 3+ 2*euler[i-1];
        printf("%ld\n",ans);
    }

return 0;
}
