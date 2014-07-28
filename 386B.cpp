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
int Prime[10000];
vector<int>pos; // holds the prime number at ith index
#define prime(i) ((Prime[i>>5])&(1<<(i&(31))))
#define set(j) (Prime[j>>5]|=(1<<(j&(31))))
#define LIM 10000
#define SLIM 102
void sieve()
{
        int i, j, m, n, t,x,k,l,h;
        set(1);
        pos.pb(2);
        pos.pb(3);
        for(k=2,l=3,i=5; i<=SLIM; k++,i=3*k-(k&1)-1)
                if(prime(k)==0)
                {
                        pos.pb(i);
                        for(j=i*i,h=((j+2)/3); j<=LIM; h+=(k&1)?(h&1?((k<<2)-3):((k<<1)-1)):(h&1?((k<<1)-1):((k<<2)-1)),j=3*h-(h&1)-1)
                        set(h);
                }

        i=3*k-(k&1)-1;
        for(; i<=LIM; k++,i=3*k-(k&1)-1)
            if(prime(k)==0)
                pos.pb(i);
        return;
}
int cnt[10000002];
long int freq[10000002];
int main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    int n,m,i,j,x;
    bool flag;
    sieve();
   // cout<<pos.size()<<endl;
    //for(i=0;i<=10;i++)cout<<pos[i]<<" ";
    S(n);
    int maxm=-1;
    while(n--)
    {
        S(x);
        maxm= max(maxm,x);
        for(i=0;pos[i]*pos[i]<=x;i++)
        {
            flag=false;
            while(x%pos[i]==0)
            {
                flag=true;
                x/=pos[i];
            }
            if(flag)
                cnt[pos[i]]++;
            if(x==1)break;
        }
        if(x!=1)
            cnt[x]++;
    }
    long int ans=0,l,r;
    freq[0]=0;
    for(i=1;i<=maxm;i++)
    {
        freq[i]= freq[i-1]+cnt[i];
    }
    S(m);
    while(m--)
    {
        scanf("%ld %ld",&l,&r);
        if(l>maxm) l=maxm;
        if(r>maxm) r=maxm;
        ans= freq[r]-freq[l-1];
        printf("%ld\n",ans);
    }
return 0;
}
