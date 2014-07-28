#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<string.h>
#define LL long long
using namespace std;
main()
{
  int n,i,can;
  LL t_cand,each;
  scanf("%d",&n);
  cand= n*n;
  t_cand= cand*(cand+1)/2;
  int vis[10000]={0};
  each = t_can/n;
  for(j=0;j<n;j++)
  {
      for(i=1;i<t_cand,sum<each;i++)
      {
          if(vis[i]==0)
          {
              printf("%d ",i);
              sum=sum+i;
          }
      }
  }
return 0;
}
