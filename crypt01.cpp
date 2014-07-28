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
    int test_cases,i,respawn,frag,N;
    double x;
    S(test_cases);
    for(int j=1;j<=test_cases;j++)
    {
        S(N);
        respawn=0;
        frag=0;
        for(i=1;i<=N;i++)
        {
            cin>>x;
            respawn= respawn+(ceil((double)(x+1.0)/(double)30.0) );
            frag= frag+(ceil((double)(x+1.0)/(double)60.0) );
        }
        respawn*=10;
        frag*=15;
        printf("Case %d: ",j);
        if(frag<respawn)
            printf("Frag %d\n",frag);
        else if(frag>respawn)
            printf("Respawn %d\n",respawn);
        else
            printf("Respawn Frag %d\n",frag);


    }


return 0;
}
