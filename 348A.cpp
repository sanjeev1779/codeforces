#include<iostream>
#include<string.h>
#include<stdio.h>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define pb push_back
using namespace std;
main()
{
    int n,i,rem,x;
    S(n);
    int a[105];
    for(i=0;i<102;i++)
    {
        a[i]=0;
    }
    int p=0;
    for(i=0;i<n;i++)
    {
        S(x);
        a[x]++;
        if(x>25)
        {
            rem=x-25;
            if(x==50 && a[25]>0)
                {
                    a[25]--;
                }
            else
                if(a[50]>0 && a[25]>0)
                {
                    a[50]--;
                    a[25]--;
                }
                else if(a[25]>=3)
                {
                    a[25]-=3;
                }

            else
            {
                p=1;
            }
        }

    }

        if(p==1)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";


return 0;
}
