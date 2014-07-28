#include<vector>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
    int l,cnt,L,i,R;
    string str;
    cin>>str;
    int Q;
    S(Q);

    l= str.size();
    int ans[l+2];
    ans[0]=0;
    for(i=1;i<l;i++)
    {
        if(str[i-1]==str[i])
        {
            ans[i]=ans[i-1]+1;
        }
        else
            ans[i]=ans[i-1];
    }
    while(Q--)
    {
        S(L);S(R);
        cnt=ans[R-1]-ans[L-1];
        printf("%d\n",cnt);
    }
return 0;
}
