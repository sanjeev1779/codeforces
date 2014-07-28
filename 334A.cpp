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
    int x,y;
    pair<int,int>p_x[8];
    pair<int,int>p_y[8];
    for(i=0;i<8;i++)
    {
        S(x);S(y);
        p_x[i]=mp(x,y);
        p_y[i]=mp(y,x);
    }
    sort(p_x,p_x+8);
    sort(p_y,p_y+8);

return 0;
}
