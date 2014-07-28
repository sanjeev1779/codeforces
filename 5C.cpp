#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
#include<stack>
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
          freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
      // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
      string str;
      stack<char>st;
      cin>>str;
      int l= str.size();
      int cnt=0,i;
      int maxm=-1;
      for(i=0;i<l;i++)
      {
          if(str[i]=='(') //
          {
              st.push(str[i]);
          }
          else
          {
            if(st.size()>0)
            {
                st.pop();
                cnt++;
            }
            else // st size is 0
            {
                cout<<maxm<<" "<<cnt<<endl;
                maxm= max(maxm,cnt);
                while(st.size()>0)
                    st.pop();
                cnt=0;
            }
          }
      }
    //  if(st.size()==0)
    cout<<maxm<<" "<<cnt<<endl;
        maxm= max(maxm,cnt);
       stack<char>st1;
        int ans=0;
        cnt=0;
      for(i=0;i<l;i++)
      {
          if(str[i]=='(') //
          {
              st1.push(str[i]);
          }
          else
          {
            if(st1.size()>0)
            {
                st1.pop();
                cnt++;
            }
            if(cnt==maxm)
            {
                ans++; cnt=0;
               // cout<<i<<endl;
                while(st1.size()>0)
                    st1.pop();
            }
          }
      }
      if(maxm==0)
        printf("0 1\n");
      else
      cout<<2*maxm<<" "<<ans<<endl;

return 0;
}
