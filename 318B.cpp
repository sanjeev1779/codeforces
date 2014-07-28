#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string.h>
#define LL long long
using namespace std;
main()
{
    string ch;
    cin>>ch;
    LL l=ch.size();
    LL heavy=0;
    LL i,ans=0;

    for(i=0;i<l;)
    {
        if( (l-i)>4 && ch[i]=='h' && ch[i+1]=='e' && ch[i+2]=='a' && ch[i+3]=='v' && ch[i+4]=='y' )
        {
            heavy++;
            i=i+5;
        }
        else if( (l-i)>4 && ch[i]=='m' && ch[i+1]=='e' && ch[i+2]=='t' && ch[i+3]=='a' && ch[i+4]=='l' )
        {
                ans=ans+heavy;
                i=i+5;
        }
        else
        {

            i++;
        }
    }
    cout<<ans<<endl;
return 0;
}

