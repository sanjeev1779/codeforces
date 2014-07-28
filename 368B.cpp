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

        int n,m,l,i;
        cin>>n>>m;
        int  a[n+3],cnt[n+4];
        map<int,int>map_it;
        memset(cnt,0,sizeof(cnt));
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=n;i>=1;i--)
        {
            if(map_it.find(a[i])==map_it.end())
            {
                cnt[i]=cnt[i+1]+1;
                map_it[a[i]]=1;
            }
            else cnt[i]=cnt[i+1];
        }
        while(m--)
        {
            cin>>l;
            cout<<cnt[l]<<endl;
        }
return 0;
}
