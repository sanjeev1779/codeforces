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
void LPS(string pat)
{
    int len=0; //length of the prev. longest prefix suffix
    int i;
    lps[0]=0;// 1st char has no ps
    i=1;
    int M= pat.size();
    while(i<M)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else // if(pat[i]!=pat[len])
        {
            if(len!=0)
            {
                len= lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}

int KMP_search(string text, string pat)
{
    int N= text.size();
    int M= pat.size();
    LPS(pat);
    int cnt=0;
    int i=0,j=0; //index of text
    while(i<N)
    {
        if(pat[j]==text[i])
        {
            i++;j++;
        }
        if(j==M)
        {
            //printf("pattern starts from %d and ends at %d\n",i-j,i-1);
            cnt++;
            j=lps[j-1];
        }
        else if(pat[j]!=text[i]) // mismatch after j-1 matches
        {
            if(j!=0)
                j=lps[j-1];
            else
            i++;
        }
    }
   return cnt;
}
main()
{
       //freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    string str,temp="";
    cin>>str;
    int ans=0;
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        temp="";
        for(int j=i;j<l;j++)
        {
            temp+=str[j];
            int x=KMP(str,temp);
            if(x>=2)
                {
                ans=max(temp.length(),ans);
            }

        }
    }
    cout<<ans;
return 0;
}
