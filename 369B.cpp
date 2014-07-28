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
       string str;
       cin>>str;
       int i,k1,k2,start,cnt=0,flag=0,j,k3,k4,k5;
       int l= str.length();
       LL ans=1;
        for(i=0;i+1<l;i++)
        {
            k1= str[i]-'0';
            k2= str[i+1]-'0';
            start=i+1;
            cout<<"start= "<<start<<endl;
            if(k1+k2==9)
            {
                cnt=1;
                flag=0;
                cout<<"ksnadm a"<<k1<<" "<<k2<<endl;
                for(j=i+2;j+1<l;j=j+2)
                {
                    k3=str[j]-'0';
                    k4= str[j+1]-'0';
                    cout<<k1<<" "<<k2<<" "<<k3<<" "<<k4<<endl;
                    if(k3+k4==9 && k1==k3 &&k2==k4)
                    {
                        flag=1;
                        cnt++;
                        cout<<"hi" <<cnt<<endl;
                    }
                    else break;
                }

                i=start+ 2*cnt;
                cout<<"in the middle i = "<<i<<endl;
                if(i==l)
                    cnt=1;
                else if(i+1<l)
                {
                    k5= str[i+1]-'0';
                    if(k2+k5==9)
                    {
                        cnt++;
                        i++;
                    }
                    else cnt=1;
                }

                //cnt++;

                cout<<"cnt= "<<cnt<<endl;
                ans= ans*cnt;
                cout<<"ans= "<<ans<<endl;
            }
            cout<<"i ="<<i<<endl;
            cout<<"ne\n";
        }
        cout<<ans<<endl;
return 0;
}
