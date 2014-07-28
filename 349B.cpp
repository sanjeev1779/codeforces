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
            int v,i,j,val,minm;
            int a[12];
        int pos;
        a[0]=0;
        S(v);
        minm=1000002;
        for(i=1;i<=9;i++)
        {
            S(a[i]);
            minm=min(a[i],minm);
        }
        if(minm>v || v==0)
            printf("-1\n");
        else {
        while(v>0)
        {
            minm= 1000002;
            for(i=1;i<=9;i++)
            {
                if(a[i]<=minm)
                {
                    pos=i;
                 //   cout<<a[i]<<" : "<<"post "<<i<<endl;
                    minm=a[i];
                }
            }


            if(v<minm)
                break;
             val= v/minm;
             v= v%minm;
             for(j=0;j<val;j++)
                printf("%d",pos);
              a[pos]=1000002;

        }
        printf("\n");
        }



return 0;
}
