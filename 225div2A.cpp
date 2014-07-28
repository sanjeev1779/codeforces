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
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);

        int n,i,j,ans;
        cin>>n;
        if(n%2==1){
            ans=((n+1)/2)*(n+1)/2+ n/2*(n/2);
                cout<<ans<<endl;
            for(i=1;i<=n;i++)
            {
                if(i%2==1)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(j%2==1)
                        {
                            printf("C");
                        }
                        else printf(".");
                    }
                }
                else
                {
                        for(j=1;j<=n;j++)
                    {
                        if(j%2==1)
                        {
                            printf(".");
                        }
                        else printf("C");
                    }
                }
                cout<<endl;

            }
        }
        else
        {
             ans= (n/2)*n;
                cout<<ans<<endl;
            for(i=1;i<=n;i++)
            {
                if(i%2==1)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(j%2==1)
                        {
                            printf("C");
                        }
                        else printf(".");
                    }
                }
                else
                {
                        for(j=1;j<=n;j++)
                    {
                        if(j%2==1)
                        {
                            printf(".");
                        }
                        else printf("C");
                    }
                }
                cout<<endl;

            }

        }
return 0;
}
