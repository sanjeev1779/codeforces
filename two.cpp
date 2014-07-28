#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
using namespace std;
int arr[500050];
 int fg[1000050];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int w=0,ans=n+5;
    int c=0;
        for(int i=0;i<n;i++)
          {
                      scanf("%d",&arr[i]);
                     c=max(c,arr[i]);
            }

        memset(fg,0,sizeof(fg));
            for(int i=0;i<n;i++)
              {
                 if(fg[arr[i]]==0)
                      fg[arr[i]]=min(i+1,n-i);
                   else
                    {
                      int temp=min(i+1,n-i);
                      fg[arr[i]]=min(fg[arr[i]],temp);
                    }
                }

         for(int i=0;i<n;i++)
                 {
                         if(k>arr[i] && fg[k-arr[i]]>0 && k!=2*arr[i])
                            {
                                w =max(fg[k-arr[i]],fg[arr[i]]);
                                 ans=min(ans,w);

                                 }
                  }

                  if(ans==n+5)
                     cout<<"-1\n";
                  else
                      cout<<ans<<endl;
    return 0;
}
