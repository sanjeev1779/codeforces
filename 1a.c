#include<stdio.h>
#include<math.h>
main()
{
 long int n,m,a,ans;
 scanf("%ld %ld %ld",&n,&m,&a);
 ans= ceil( (floor)(n)/ (floor) (a))* ceil( (floor)(m)/ (floor) (a) );
 printf("%ld\n",ans);

return 0;
}
