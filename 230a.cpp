#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
    int p=1,j;
    int s,n,temp,i;
    scanf("%d %d",&s,&n);
    int a[n];
    int l[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&l[i]);
    }
    //check in every round whether he able to kills one or not , if not then break print no, else print yes
    int this_defeats=0;
    int prev_defeats=0;
    while( this_defeats<n )
    {
        for(i=0;i<n;i++)
        {
            if(s>=a[i] && a[i]!= -1)
            {
                s+=l[i];
                a[i]=-1;
                this_defeats++;
            }
        }

            if( this_defeats== prev_defeats) // he is not more powerful than any dragon, as he is able to defeat anyone
            {
                p=0;
                break;
            }
            else
            {
                prev_defeats=this_defeats;
            }
    }


    if(p==0)
        printf("NO\n");
    else
        printf("YES\n");

return 0;
}
