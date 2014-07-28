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
        int n;
        cin>>n;
        int a[n+3];
        int x1,x2,x3,x4,i,j;
        for(i=1;i<=n;i++)
        {
            S(a[i]);
        }
        int flag=0;
        for(i=1;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                x1=a[i], x2=a[i+1];
                x3=a[j],x4=a[j+1];

                if( x3 >= x1 && x3>=x2 && x4>=x2 && x4>=x1 || x3 <= x1 && x3<=x2 && x4<=x2 && x4<=x1  || x3>=x1 && x3<=x2 && x4>=x1 && x4<=x2  )
                {
                    continue;//ok
                }
                if(x1<=x2)
                {
                    if(x3<=x4)
                    {
                        if(x3<=x1 && x4>=x1)
                            continue;
                    }
                    else
                    {
                        if(x4<=x1 && x3>=x2)
                            continue;
                    }
                }
                else
                {
                    if(x3<=x4)
                    {
                        if(x3<=x2 && x1<=x4)
                            continue;
                    }
                    else
                    {
                        if(x4<=x2 && x1<=x3)
                            continue;
                    }
                }
                    cout<<i<< " "<< j <<endl;
                    printf("yes\n");
                    return 0;
            }
        }
    printf("no\n");
return 0;
}
