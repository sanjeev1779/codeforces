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
        int n,i;
        LL x;
        cin>>n;
        pair<LL,int>p[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>x;
            p[i]= mp(x,i);
        }
        sort(p+1,p+n+1);
        LL a[n+2];
        int idx= p[1].second;
        a[idx]= p[1].first;
        LL maxm= p[1].first;
        for(i=2;i<=n;i++)
        {
            x= p[i].first;
            idx= p[i].second;
          //  cout<<x<<" "<<idx<<" "<<maxm<<endl;
            if(x<=maxm)
            {
                maxm=maxm+1;
                a[idx]= maxm;
            }
            else
            {
                a[idx]=x; maxm=x;
            }
        }
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
        printf("\n");

return 0;
}
