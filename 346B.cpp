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
int lcs[102][102];
string backtrack(string str1, string str2, int i, int j)
{
    if(i==0 || j==0)
        return "";
    else if(str1[i-1]==str2[j-1])
        return backtrack(str1,str2,i-1,j-1)+str1[i-1];
    else
    {
        if(lcs[i-1][j]>lcs[i][j-1])
            return backtrack(str1,str2,i-1,j);
        else
            return backtrack(str1,str2,i,j-1);
    }
}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
        int i,j;
        string str1,str2;
       cin>>str1>>str2;
       int l1= str1.length();
       int l2= str2.size();

       string str="";
      memset(lcs,0,sizeof(lcs));
       for(i=1;i<=l1;i++)
       {
           for(j=1;j<=l2;j++)
           {
               if(str1[i-1]==str2[j-1])
                    {
                        lcs[i][j]=lcs[i-1][j-1]+1;
                        str=str+ str1[i-1];
                    }
               else
                    lcs[i][j]= max( lcs[i-1][j],lcs[i][j-1]);
           }
       }

       str= backtrack(str1,str2,l1,l2);
       cout<<str<<endl;
       cout<<lcs[l1][l2]<<endl;
return 0;
}
