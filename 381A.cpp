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
#define SL(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
        int n;
        cin>>n;
        int a[n+5],i;
        for(i=1;i<=n;i++)
            S(a[i]);
        int j=n;
        int turn=0;
        int ser=0,dima=0;
        for(i=1;i<=j && turn<=n;)
        {
           if(turn%2==0)// first
           {
               if(a[i]>a[j])
               {
                   ser+=a[i];
                   i++;
               }
               else
               {
                   ser+=a[j];
                   j--;
               }
           }

           if(turn%2==1)// second
              {
                    if(a[i]>a[j])
                   {
                       dima+=a[i];
                       i++;
                   }
                   else
                   {
                       dima+=a[j];
                       j--;
                   }
            }
           turn++;
        }
        printf("%d %d\n",ser,dima);
return 0;
}

