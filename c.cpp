#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#define LL long long
using namespace std;
main()
{
    int test_cases,i,j,k,ans,A,B,K,c;
    int a[100002];
    cin>>test_cases;
    int ran;
    while(test_cases--)
    {
        cin>>A>>B>>K;
        ans=0;
        for(i=A;i<=B;i++)
        {
            c=0;
           int i_new = i;
           ran=0;
            memset(a,0,sizeof(a));
            for(j=2;j*j<=i_new;j++)
            {
                while(i_new%j==0)
                {
                   // a[j]++;
                   if(a[j]==0)
                   {
                       a[j]=1;
                        c++;
                   }
                    i_new=i_new/j;
                }
                if(c>K || c>5)
                    break;
            }
            if(i_new!=1){
                    {
                    if(a[i_new]==0)
                        c++;
                    }
            }

            if(c==K)
                ans++;

        }
        cout<<ans<<endl;
    }
return 0;
}
