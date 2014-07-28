#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<climits>
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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    int n,i,x,j,ans1,ans2,ans;
    cin>>n;
    int maxm=-1;
    int freq[5005]={0};
    for(i=0;i<n;i++)
    {
        cin>>x;
        freq[x]++;
        maxm= max(maxm,x);
    }
    ans1=0;
    ans2=0;
    ans= INT_MAX;
    for(i=1;i<=maxm;i++)
    {
        if(freq[i]>0)// at each i
        {

            ans2=0;
            for(j=maxm;j>=1;j--)
            {
                if(freq[j]>0)
                {
                    if(j>2*i)
                    {
                        ans2+=freq[j]; // to be deleted
                    }
                    else break;
                }
            }
            ans= min(ans,ans1+ans2);
            ans1+= freq[i];// to be deleted
           // cout<<ans<<endl;
        }
    }
    cout<<ans<<endl;


return 0;
}
