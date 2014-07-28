// codeforces
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
        int a[n+3];
        int x1,x2,x3,x4,i,j;
        for(i=1;i<=n;i++)
        {
            S(a[i]);
        }
        pair<int,int>p;
        for(i=1;i<n;i+=2)
        {

            p[1]=mp(a[i],i);
            cnt=1;
            if(i+1<=n)
            {
                p[2]= mp(a[i+1],i+1);cnt++;
            }
            if(i+2<=n)
            {
                 p[2]= mp(a[i+2],i+2);cnt++;
            }
            if(i+3<=n)
            {
                 p[3]= mp(a[i+3],i+3);cnt++;
            }
            sort(p,p+cnt);
            if(cnt==2)
            {
                if(p[1].second==i && p[2].second==
            }

        }

return 0;
}
