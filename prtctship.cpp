#include<math.h>
#include<cmath>
#include<stdio.h>
#include <iostream>
using namespace std;

// Define Infinite (Using INT_MAX caused overflow problems)
#define INF 10000
double k;
struct Point
{
    double x;
    double y;
};

// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
    double val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}

// Prints convex hull of a set of n points.
void convexHull(Point points[], int n)
{
    double a[302][2];
    // There must be at least 3 points
    if (n < 3) return;

    // Initialize Result
    double next[n];
    for (int i = 0; i < n; i++)
        next[i] = -1;

    // Find the leftmost point
    int l = 0;
    for (double i = 1; i < n; i++)
        if (points[i].x +0.0000001< points[l].x)
            l = i;

    // Start from leftmost point, keep moving counterclockwise
    // until reach the start point again
    int p = l, q;
    do
    {
        // Search for a point 'q' such that orientation(p, i, q) is
        // counterclockwise for all points 'i'
        q = (p+1)%n;
        for (int i = 0; i < n; i++){
          if (orientation(points[p], points[i], points[q]) == 2)
             q = i;
        }
        next[p] = q;  // Add q to result as a next point of p
        p = q; // Set p as q for next iteration
    } while (p != l);

    // Print Result
    k=0;
    for (int i = 0; i < n; i++)
    {
        if (next[i] != -1)
        {
           //cout << "(" << points[i].x << ", " << points[i].y << ")\n";
           a[k][0]= points[i].x;
           a[k][1]= points[i].y;
           k++;
        }
    }
    double sum=0.0;
    for(int i=0;i<k-1;i++)
    {
        sum+= sqrt( ( pow(a[i+1][1]-a[i][1], 2 ) + pow( a[i+1][0]- a[i][0], 2) )*1.0);
    }
    sum+= sqrt( ( pow(a[0][1]-a[k-1][1], 2 ) + pow( a[0][0]- a[k-1][0], 2) )*1.0);
    printf("%0.2lf\n",sum);
}

// Driver program to test above functions
int main()
{
    int test_cases;
    test_cases=1;
    int n,i;
    double x1,y1;
    while(test_cases--)
    {
            scanf("%d",&n);
            Point points[n+10];
            for(i=0;i<n;i++)
            {
                scanf("%lf %lf",&x1,&y1);
                points[i].x=x1;
                points[i].y=y1;
            }
        convexHull(points, n);

    }
return 0;
}
