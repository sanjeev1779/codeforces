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
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    string str,temp,te;
    cin>>str;
    int cnt=0,l,flag,i,t;
    while(true)
    {
            l= str.size();
            for(i=l-1;i>=0;i--)
            {
                temp="";
                while(str[i]=='0')
                {
                    temp+=str[i]; i--;
                }
                temp=str[i]+temp;
                t= temp.size();
                if(i>t)
                    cnt++;
                else if(i<t)
                {
                    flag=1;
                    cnt++; break;
                }
                else if(i==t)
                {
                    te= str.substr(0,i);
                    if(te<temp)
                    {
                        cnt++; flag=1; break;
                    }
                    else
                    {
                        cnt++;
                        str= te; break;
                    }
                }
            }
            if(flag==1)break;
    }
    cout<<cnt<<endl;
return 0;
}
