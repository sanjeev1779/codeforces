/* Dynamic Programming implementation of Box Stacking problem */
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#define LL long long int
using namespace std;
/* Representation of a box */
struct Box
{
  // h –> height, w –> width, d –> depth
  LL h, w, d;  // for simplicity of solution, always keep w <= d
};

// A utility function to get minimum of two intgers
LL min (LL x, LL y)
{ return (x < y)? x : y; }

// A utility function to get maximum of two intgers
LL max (LL x, LL y)
{ return (x > y)? x : y; }

/* Following function is needed for library function qsort(). We
   use qsort() to sort boxes in decreasing order of base area.
   Refer following link for help of qsort() and compare()
   http://www.cplusplus.com/reference/clibrary/cstdlib/qsort/ */
LL compare (*Box a, *Box b)
{
    return  b.d*b.w- a.w*a.d;
}

/* Returns the height of the tallest stack that can be formed with give type of boxes */
LL maxStackHeight( Box arr[], int n )
{
   /* Create an array of all rotations of given boxes
      For example, for a box {1, 2, 3}, we consider three
      instances{{1, 2, 3}, {2, 1, 3}, {3, 1, 2}} */
   Box rot[3*n+10];
   int index = 0;
   for (int i = 0; i < n; i++)
   {
      // Copy the original box
      rot[index] = arr[i];
      index++;

      // First rotation of box
      rot[index].h = arr[i].w;
      rot[index].d = max(arr[i].h, arr[i].d);
      rot[index].w = min(arr[i].h, arr[i].d);
      index++;

      // Second rotation of box
      rot[index].h = arr[i].d;
      rot[index].d = max(arr[i].h, arr[i].w);
      rot[index].w = min(arr[i].h, arr[i].w);
      index++;
   }

   // Now the number of boxes is 3n
   n = 3*n;

   /* Sort the array ‘rot[]‘ in decreasing order, using library
      function for quick sort */
   sort(rot,rot+n ,compare);

   // Uncomment following two lines to print all rotations
   // for (int i = 0; i < n; i++ )
   //    printf("%d x %d x %d\n", rot[i].h, rot[i].w, rot[i].d);

   /* Initialize msh values for all indexes
      msh[i] –> Maximum possible Stack Height with box i on top */
   LL msh[n];
   for (int i = 0; i < n; i++ )
      msh[i] = rot[i].h;

   /* Compute optimized msh values in bottom up manner */
   for (int i = 1; i < n; i++ )
      for (int j = 0; j < i; j++ )
         if ( rot[i].w < rot[j].w &&
              rot[i].d < rot[j].d &&
              msh[i] < msh[j] + rot[i].h
            )
         {
              msh[i] = msh[j] + rot[i].h;
         }


   /* Pick maximum of all msh values */
   LL maxm = -1;
   for ( int i = 0; i < n; i++ )
      if ( maxm < msh[i] )
         maxm = msh[i];

   return maxm;
}

/* Driver program to test above function */
int main()
{
   int n,i;
   while(1)
   {
       scanf("%d",&n); if(n==0)break;
       Box twr[n+1];
       for(i=0;i<n;i++)
       {
            scanf("%lld %lld %lld",&twr[i].h ,&twr[i].w , &twr[i].d);
       }
      printf("%lld\n",
             maxStackHeight (twr, n) );
   }

  return 0;
}
