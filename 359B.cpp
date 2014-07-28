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
       int n,k,i,temp,first,second;
       cin>>n>>k;
       int cnt=0;
       for(i=2*n;i>=1;i=i-2)
       {
           cnt++;
           first=i;
           second=i-1;
            if(cnt<=k)
            {
                swap(first,second);
                /*temp=first;
                first=second;
                second=temp;*/
            }
            cout<<first<<" "<<(second)<<" ";
       }
       cout<<endl;
return 0;
}
