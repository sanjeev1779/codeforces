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
        //freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       int n,i,j;
       cin>>n;
       LL a[n+2];
       LL b[n+2];
       int ans[n+2],ans1[n+2];
       memset(ans,0,sizeof(ans));
       memset(ans1,0,sizeof(ans1));
       for(i=1;i<=n;i++)
       {
           cin>>a[i]>>b[i];
       }
       int cnt=0;
        i=1,j=1;
       while(cnt<n)
       {
            if(a[i]<b[j])
            {
                ans[i]=1;
                i++;

            }
            else if(a[i]>b[j])
            {
                ans1[j]=1;j++;
            }
            cnt++;
       }
      /*  for(i=1;i<=n;i++)
            printf("%d",ans[i]);
        printf("\n");
       for(i=1;i<=n;i++)
            printf("%d",ans1[i]);*/

       for(i=1;i<=n/2;i++)
       {
           ans1[i]=ans[i]=1;
       }
       int x;
       if(n%2==1)
       {
           x= (n+1)/2;
          if(a[x]<b[x])
            ans[x]=1;
          else ans1[x]=1;
       }

       for(i=1;i<=n;i++)
            printf("%d",ans[i]);
        printf("\n");
       for(i=1;i<=n;i++)
            printf("%d",ans1[i]);
return 0;
}
