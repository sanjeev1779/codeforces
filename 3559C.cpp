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
LL mod= 1000000007;

LL fast_mod_pow(LL a, LL b)
{
    LL prod=1;
    while(b>0)
    {
        if(b%2)
            prod= (prod*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return (prod%mod);
}

int factors(LL cnt, LL x)
{
    int ans=0;
    while(cnt>0)
    {
        if(cnt%x==0)
            ans++;
        else break;
        cnt/=x;
    }
    return ans;
}
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
       LL y,x;
       int i,n;
       cin>>n>>x;
       LL a[n+3];
       LL sum=0;
       LL maxm=-1;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
       maxm= a[n];
       LL cnt=0;
    int fact=0;
       LL k;
       for(k=a[n];k>=0;k--)
       {
           while(n>=1 && a[n]==k)
           {
               n--;
               cnt++;
           }
            if(cnt%x>0) break;
            fact++;
            cnt=cnt/x;
       }
      k=sum-maxm+fact;
       if(k>=sum)
            k=sum;
       LL gcd= fast_mod_pow(x,k);
       cout<<gcd<<endl;
return 0;
}
