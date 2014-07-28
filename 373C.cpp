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
       freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       int n,k,x,i,left, right,ans;
       cin>>n;
      int a[n+2];
       for(i=0;i<n;i++)
       {
            S(a[i]);
       }
       sort(a,a+n);
       int index;
       i=n-1;
       while(a[n-1]<2*a[i]&& i>=0)
       {
           i--;
       }
        ans=n;
        index=i;
        right=n-1,left=index;
            while(right>index&&left>=0)
        {
            if(a[right]>=2*a[left])
            {
               // cout<<left<<" "<<right<<endl;
                right--;
                ans--;
                left--;
            }
            else
            {
                left--;
            }
        }
        cout<<ans<<endl;
return 0;
}
