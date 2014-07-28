#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#define LL long long
using namespace std;
main()
{
     LL n;
     cin>>n;
     int p=1;
        while(n>0)
        {
            if(n%10==1)
                n=n/10;
            else
                if(n%100==14)
                n=n/100;
            else
                if(n%1000==144)
                 n=n/1000;
            else
            {
                p=0;
                break;
            }
        }
        if(p==0)
            printf("NO\n");
        else
            printf("YES\n");
return 0;
}
