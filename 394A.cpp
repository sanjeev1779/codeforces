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
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       string str;
       int a,b,c,i;
       cin>>str;
       int A=0,B=0,C=0;
       int l= str.length();
       for(i=0;i<l;i++)
       {
           if(str[i]=='|')
               A++;
               else break;

       }
       for(i=i+1;i<l;i++)
       {
           if(str[i]=='|')
           {
               B++;
           }
               else break;

       }
       for(i=i+1;i<l;i++)
       {
           if(str[i]=='|')
           {
               C++;

           }
             else break;
       }

        if(A+1+B==C-1)
        {
            A=A+1;
            C=C-1;
        }
        else if(A+B-1==C+1)
        {
            A=A-1;
            C=C+1;
        }
        else
        {
            printf("Impossible\n");return 0;
        }
        for(i=0;i<A;i++)
            cout<<"|";
        cout<<"+";
        for(i=0;i<B;i++)
            cout<<"|";
        cout<<"=";
        for(i=0;i<C;i++)
            cout<<"|";

return 0;
}
