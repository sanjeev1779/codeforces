#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
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
         // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
      // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
      int n,x,i;
      S(n);
      vector<int>vec;
      vector<int>sec;
      vector<int>fir;
      vector<int>th;
      for(i=0;i<n;i++)
      {
          S(x);
          vec.pb(x);
      }
      sort(vec.begin(),vec.end());
      fir.pb(vec[0]);
      for(i=1;i<n;i++)
      {
        if(vec[i]!=vec[i-1])
        {
            fir.pb(vec[i]);
        }
        else
        {
            sec.pb(vec[i]);
        }
      }
      sort(sec.begin(),sec.end());
      int l= sec.size();
      int l1= fir.size();
     // cout<<l<<endl;
      //cout<<l1<<endl;
     x=l-1;
     if(x>=0)
     {
         while(sec[x]==fir[l1-1])
        x--;
     }
    if(x>0)
    {
        th.pb(sec[x]);
        x--;
    }
    for(;x>=0;x--)
    {
        if(sec[x]!=sec[x+1])
            th.pb(sec[x]);
    }
    int ans= fir.size()+th.size();
    cout<<ans<<endl;
    for(i=0;i<fir.size();i++)
        cout<<fir[i]<<" ";
    for(i=0;i<th.size();i++)
        cout<<th[i]<<" ";
    cout<<endl;
return 0;
}
