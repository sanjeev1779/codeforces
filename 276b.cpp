#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#define LL long long
using namespace std;
main()
{
    char ch[1005];
    scanf("%s",ch);
    int a[26],i;
    int odd=0;
    memset(a,0,sizeof(a));

    int l=strlen(ch);
    for(i=0;i<l;i++)
    {
        a[ch[i]-97]++;
    }

    for(i=0;i<26;i++)
    {
        if(a[i]%2==1)
            odd++;
    }

    if(odd==0)
    {
        printf("First\n");
    }
    else if( odd %2 == 0)
    {
        printf("Second\n");
    }
    else
        printf("First\n");

return 0;
}
