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
    int test_cases;
    S(test_cases);
    int a[12],n,i;
    int maxm_val[12],minm_val[12];
    while(test_cases--)
    {
        S(n);
        for(i=0;i<n;i++)
            S(a[i]);
       maxm_val[0]=a[0]; // base cases
       minm_val[0]=a[0];
       for(i=1;i<n;i++)
       {
            if(a[i]>0)
            {
                maxm_val[i]= max( maxm_val[i-1]+ a[i], max(maxm_val[i-1]- a[i], maxm_val[i-1]*a[i] ));
                minm_val[i]= min( minm_val[i-1]+ a[i], min(minm_val[i-1]- a[i], minm_val[i-1]*a[i] ));
            }
            else
            {
                 maxm_val[i]= max( maxm_val[i-1]+ a[i], max(maxm_val[i-1]- a[i], minm_val[i-1]*a[i] ));
                 minm_val[i]= min( minm_val[i-1]+ a[i], min(minm_val[i-1]- a[i], maxm_val[i-1]*a[i] ));
            }
       }

       printf("%d\n",minm_val[n-1]);
    }
return 0;
}
