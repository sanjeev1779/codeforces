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
            int a[10];
            pair<int,int>p[12];
        int pos;
        a[0]=0;
        S(v);
        int x;
        minm=1000002;
        p[0]=mp(0,0);
        for(i=1;i<=9;i++)
        {

            S(x);
            p[i]=mp(x,i);
            minm=min(x,minm);

        }/*
        for(i=1;i<=9;i++)
        {
            cout<<p[i].first<<" ";
            cout<<p[i].second<<endl;
        }*/
        if(minm>v)
            printf("-1\n");

        else {

              sort(p,p+11);
               /*for(i=1;i<=10;i++)
            {
                    cout<<p[i].first<<" ";
                    cout<<p[i].second<<endl;
            }*/
            for()


        }



return 0;
}
