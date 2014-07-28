// codeforces
#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
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

        int n,m,i,j,a,b,ans1,x1,y1,k1,k2;
        cin>>n>>m>>i>>j>>a>>b;

         int flag=0;
        int ans= INT_MAX;
        x1=  abs(i-1);
        y1=  abs(j-1);

        if( x1%a==0 && y1%b==0)
        {
            k1= x1/a;
            k2= y1/b;
            if(k1%2==1 && k2%2==1 || k1%2==0 && k2%2==0 )
            {
                ans1= max(k1,k2);
                flag=1;
                ans= min(ans,ans1);
            }
        }
        x1=  abs(i-n);
        y1=  abs(j-m);

        if( x1%a==0 && y1%b==0)
        {
            k1= x1/a;
            k2= y1/b;
            if(k1%2==1 && k2%2==1 || k1%2==0 && k2%2==0 )
            {
                ans1= max(k1,k2);
                flag=1;
                ans= min(ans,ans1);
            }
        }
        x1=  abs(i-1);
        y1=  abs(j-m);

        if( x1%a==0 && y1%b==0)
        {
            k1= x1/a;
            k2= y1/b;
            if(k1%2==1 && k2%2==1 || k1%2==0 && k2%2==0 )
            {
                ans1= max(k1,k2);
                flag=1;
                ans= min(ans,ans1);
            }
        }
        x1=  abs(i-n);
        y1=  abs(j-1);

        if( x1%a==0 && y1%b==0)
        {
            k1= x1/a;
            k2= y1/b;
            if(k1%2==1 && k2%2==1 || k1%2==0 && k2%2==0 )
            {
                ans1= max(k1,k2);
                flag=1;
                ans= min(ans,ans1);
            }

        }
        if(n<=a || m<=b  && i==1 && j==1 || i==1 && j==m || i==n && j==1 || i==n && j==m)
            flag=0;
        if()
        {
            cout<<"0\n";
            return 0;
        }
        if(flag==0)
            cout<<"Poor Inna and pony!\n";
        else
            cout<<ans<<endl;
return 0;
}
