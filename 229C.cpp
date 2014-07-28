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
int gcd(int a, int b){ int temp; while(b>0)	{ temp= b; b=a%b; a=temp;}	return a;}
int a[12][100005];
main()
{
        //freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
        memset(a,0,sizeof(a));
        int n,k,w,r,i,x,l,ans;
        cin>>n>>k>>w;
        string str;
        cin>>str;
        int len= str.size();

        for(r=0;r<k;r++)
        {
            for(i=r-1;i<len;i++)
            {
                if(i==-1) continue;
                if(i==0)
                {
                    if(str[i]=='1')
                        a[r][i]++;
                }
                x= (i-r+2)%k;
               // cout<<x<<" "<<str[i]<<" \t";
                if(x==0 && (i+2)!=r) // 1
                {
                    if(str[i]=='0')
                        a[r][i]= a[r][i-1]+1;
                    else a[r][i]= a[r][i-1];
                }
                else
                {
                    if(str[i]=='1')
                       a[r][i]= a[r][i-1]+1;
                    else a[r][i]= a[r][i-1];
                }
            }

        }

        while(w--)
        {
            cin>>l>>r;
            int rem= l%k;
            if(l-2>=0)
                    ans= a[rem][r-1]-a[rem][l-2];
            else ans= a[rem][r-1];
            cout<<ans<<endl;
        }
return 0;
}
