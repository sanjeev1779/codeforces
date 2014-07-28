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
#define SL(N) scanf("%lld",&N);
#define pb push_back
#define mp make_pair
using namespace std;
LL mod= 1000000007;
LL Base[100020];
int B=1009,i;
LL fast_mod_pow(int a,int b)
{
    LL prod=1;
    while(b>0)
    {
        if(b%2==1)
            prod=(prod*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return prod%mod;
}
void precompute(int l)
{

    Base[0]=1;
    for(i=1;i<l;i++)
    {
        Base[i]= (Base[i-1]*B)%mod;
    }
}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);

       string str,substr;
       int i;
       cin>>str;
       int l= str.size();
       LL H[l+2][2];
       memset(H,0,sizeof(H))
       H[0][0]= str[0];
       precompute(l);

       for(i=1;i<l;i++)
       {
           H[i][0]=( ( B*( (H[i-1]%mod - str[i-1]*Base[l-1]%mod + mod)%mod) )%mod + str[i+l-1] )%mod;
       }

       for(i=0;i<l;i++)
       {
           for(j=i;j<l;j++)
           {
               hash_val=
           }
       }

return 0;
}
