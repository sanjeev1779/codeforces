#include <stdio.h>
int main()
{
    unsigned int dig[1000];
    int test_cases,num;
    scanf("%d",&test_cases);
    while(test_cases--)
    {

        int first=0, last=0, carry, n, x, sum=0;
        scanf("%d",&num);
        dig[0] = 1;
        for(n=2; n <=num; n++)
        {
            carry = 0;
            for(x=first; x <= last; x++)
            {
                carry = dig[x]*n + carry;
                dig[x] = carry%num;
                if(x == first && !(carry%num)) first++;
                carry /= num;
            }

            if(carry) dig[++last] = carry;
        }

        for(x=first; x <= last; x++)
        {
           sum += dig[x]%10 + (dig[x]/10)%10 + (dig[x]/100)%10 + (dig[x]/1000)%10;
        }
        printf("%d\n",sum);
    }

return 0;
}
