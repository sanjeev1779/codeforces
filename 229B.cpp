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
#define pb push_back
#define mp make_pair
using namespace std;
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
main()
{
         // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
      // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
      int n,i;
      cin>>n;
      long long int a[n+5],b[n+5];
      for(i=0;i<n;i++)
        cin>>a[i];
      for(i=0;i<n;i++)
        cin>>b[i];
        long long int joy=0,x;
      for(i=0;i<n;i++)
      {
            if(b[i]>2*a[i] || b[i]==1)
                joy--;
           else
           {
               if(b[i]%2)
                  {

                      x= ((b[i]+1)/2 )*( (b[i]-1)/2);
                  }
               else  x= ((b[i])/2 )*( (b[i])/2);

               joy+=x;
           }
      }
       cout<<joy<<endl;
return 0;
}
