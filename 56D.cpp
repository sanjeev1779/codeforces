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
int dp[1003][1003];
string str1,str2;
string ans="";
void backtrack(int i,int j)
{
    if(i==0 && j==0)
        return;
    if(i==0)
       {
           cout<<"INSERT "<<i+1<<" "<<str2[j]<<endl;
            backtrack(i,j-1);
       }
    else if(j==0)
    {
             cout<<"DELETE "<<i<<endl;
            backtrack(i-1,j);
    }
    {
            if(dp[i-1][j-1]<=dp[i][j-1] && dp[i-1][j-1]<=dp[i-1][j])
            {
                cout<<"INSERT "<<i<<str2[j-1]<<endl;
                ans+= str1[i-1];
                backtrack(i-1,j-1);

            }
            else
            {
                if(dp[i-1][j]<dp[i][j-1])
                {
                    cout<<"REPLACE "<<(i)<<str1[j-1]<<endl;
                    ans+= str1[i-1];
                    backtrack(i-1,j);
                }
                else
                {
                     cout<<"REPLACE "<<(j)<<str2[j-1]<<endl;
                        ans+= str2[j-1];
                        backtrack(i,j-1);
                }
            }
    }
    return ans;
}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);

       cin>>str1>>str2;

       int l1,l2,i,j;
       l1= str1.length();
       l2= str2.length();

       for(i=0;i<=l2;i++)
            dp[0][i]=i;
       for(i=0;i<=l1;i++)
            dp[i][0]=i;

       for(i=1;i<=l1;i++)
       {
           for(j=1;j<=l2;j++)
           {
               if(str1[i-1]==str2[j-1])
                    dp[i][j]= dp[i-1][j-1];
               else
                    dp[i][j]= min(dp[i-1][j-1],min( dp[i-1][j],dp[i][j-1]))+1;
           }
       }
       cout<<dp[l1][l2]<<endl;
       string edited= backtrack(l1-1,l2-1);
       cout<<edited<<endl;
return 0;
}
