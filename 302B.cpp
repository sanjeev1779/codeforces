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
       int n,m,x;
       cin>>n>>m;
       LL c,t,v;
       vector<LL>vec;
       LL sum=0;
       int idx=0,idx1,idx2;
       //vec.pb(0);
       while(n--)
       {
            cin>>c>>t;
            sum+=c*t;
            vec.pb(sum);
       }

       while(m--)
       {
           cin>>v;
           //cout<<upper_bound(vec.begin(),vec.end(),v);
           //cout<<lower_bound(vec.begin(),vec.end(),0);
           idx= upper_bound(vec.begin(),vec.end(),v)- lower_bound(vec.begin(),vec.end(),-1);
           x= binary_search(vec.begin(),vec.end(),v);
           if(x==0)
            idx++;
           cout<<idx<<endl;
       }
return 0;
}
