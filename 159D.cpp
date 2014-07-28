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

int P[4050];
string pp(string s)
{
  int nl = s.size(),i;
  if (nl==0)
    return "^$";
  string str1 = "^";
  for (i=0;i<nl;i++)
    str1 += "#" + s.substr(i, 1);
  str1 += "#$";
  return str1;
}

int manacher_algorithm(string s)
{
      string T = pp(s);
      int i;
      int n = T.length();
      int C = 0, R = 0;
      int start=0;
      //cout<<T<<endl;
      string str1;
      int st;
      for (i = 1; i < n-1; i++)
      {
            start=i;
            int i_dash = 2*C-i;

            P[i] = (R > i) ? min(R-i, P[i_dash]) : 0;

            while (T[i + 1 + P[i]] == T[i - 1 - P[i]])
              P[i]++;

            if (i + P[i] > R)
            {
              C = i;
              R = i + P[i];
            }
      }
      int ans=0;
      for(i=1;i<=n-2;i++)
      {
        if(P[i]>0)
        {
            if(P[i]%2==1)
                ans+=(P[i]+1)/2;
            else ans+= P[i]/2;
        }
      }
       return ans;
}


main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       string str,str1,str2;
        cin>>str;
       // manacher_algorithm(str);
        int num_palin1,i;
         int right_side, left_side;
        int l= str.length();
        int last=0;
        LL sum=0;
        for(i=0;i<l;i++)
        {
            str1= str.substr(0,i+1);
            str2= str.substr(i+1,l-i-1);
            num_palin1= manacher_algorithm(str1);
            //cout<<" palindromes on left side= "<<num_palin1<<endl;
            right_side= manacher_algorithm(str2);
            //cout<<" palindromes on right side= "<<right_side<<endl;
            left_side= num_palin1-last;
           // cout<<" palindromes on left side after removal = "<<left_side<<endl;
            last= num_palin1; // num of palindromes using i-1 charahcter of the string
         //   cout<<" to be removed = "<<last<<endl;
            sum= sum+ (left_side)* (right_side);
        }
        cout<<sum<<endl;
return 0;
}
