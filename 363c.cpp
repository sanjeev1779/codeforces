#include<sstream>
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
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
    int i;
    string org_str;
    cin>>org_str;
    int l= org_str.size();
    string stn;
    stn[0]=org_str[0];
    int count=1;
    for(i=0;i<l-1;i++)
    {
        if(org_str[i]==org_str[i+1])
        {
            count++;
            if(count<=2)
            {
                stn+=org_str[i];
                stn+=org_str[i+1];
            }
        }
        else if(org_str[i]!=org_str[i+1] && count==1)
               stn+=org_str[i];
           else count=1;
    }
    if(count<2)
            stn+=org_str[i];
    int ln= stn.size();
    if(ln<4)
            {
                cout<<stn<<endl;
                return 0;
            }


    for(i=0;i<ln;)
    {
       if(i+3<ln)
        {
            if(stn[i]==stn[i+1] && stn[i+2]==stn[i+3])
                {
                    stn[i+3]='1';
                     i=i+3;
                }

        }

            i++;

    }
   // cout<<stn<<endl;
    for(i=0;i<ln;i++)
    {
        if(stn[i]!='1')
        {
            cout<<stn[i];
        }
    }
    cout<<endl;

return 0;
}
