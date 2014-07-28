#include<stdio.h>
main()
{
    int c=5,n=1000;
    do
    {
        n=n/c;
        printf("%d\n",n);
    }
    while(c-->0);
}
