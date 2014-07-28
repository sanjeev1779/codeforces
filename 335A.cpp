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
    string str[]={"O-|-OOOO", "O-|O-OOO",  "O-|OO-OO",  "O-|OOO-O",  "O-|OOOO-",  "-O|-OOOO", "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
    LL N;
    int rem;
    cin>>N;
    if(N==0)
        cout<<str[0]<<"\n";
    else{
    while(N>0)
    {
        rem=N%10;
        N/=10;
        cout<<str[rem]<<endl;
    }}
return 0;
}
