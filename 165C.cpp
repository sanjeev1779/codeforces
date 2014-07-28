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
        int k,en,start,ans,i;
        string str;
        cin>>k;
        cin>>str;
        LL sum=0;
        int l =str.length();
        vector<int>dp(l+3);

        dp[0]=0;
        for(i=1;i<=l;i++)
        {
            if(str[i-1]=='1')
                dp[i]=dp[i-1]+1;
            else
                dp[i]=dp[i-1];
           // cout<<str[i-1]<<" and "<<dp[i]<<" \n";
        }

        sum=0;
        int cnt,j;
        int freq[l+2];
        memset(freq,0,sizeof(freq));
        for(i=1;i<=l;)
        {
            cnt=1;
            for(j=i+1;j<=l;j++)
            {
                if(dp[i]==dp[j])
                    cnt++;
                else break;
            }
            freq[dp[i]]=cnt;
            i=i+cnt;
        }

        for(i=1;i<=l-k+1;i++)
        {
            start= dp[i-1];
            ans=0;
            en= start+k;
           // cout<<"start and end= "<<start<<" "<<en<<endl;
            //ans= upper_bound(dp.begin(),dp.end(),en)-lower_bound(dp.begin(),dp.end(),en);
           ans= freq[en];
           freq[dp[i]]--;
          //  cout<<i<<"  "<<ans<<endl;
            sum+=ans;
        }
        cout<<sum<<endl;
return 0;
}
