#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<climits>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long int
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%ld",&N);
#define pb push_back
#define mp make_pair
using namespace std;

int get()
{
  char c;
  while(c=getchar(),(c<'0'||c>'9')&&(c!='-'));
  bool flag=(c=='-');
  if(flag)
    c=getchar();
  int x=0;
  while(c>='0'&&c<='9')
    {
      x=x*10+c-48;
      c=getchar();
    }
  return flag?-x:x;
}
long int get_long()
{
  char c;
  while(c=getchar(),(c<'0'||c>'9')&&(c!='-'));
  bool flag=(c=='-');
  if(flag)
    c=getchar();
  int x=0;
  while(c>='0'&&c<='9')
    {
      x=x*10+c-48;
      c=getchar();
    }
  return flag?-x:x;
}

int getMid(int s, int e) {  return s + (e -s)/2;  }
LL RMQUtil(LL *st, int ss, int se, int qs, int qe, int index)
{
    if (qs <= ss && qe >= se)
       {
            return st[index];
       }
    if (se < qs || ss > qe)
        return INT_MAX;
    int mid = getMid(ss, se);
    return min(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
LL RMQ(LL *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        return -1;
    }

    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
LL constructSTUtil(LL arr[], int ss, int se, LL *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  min(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}
LL *constructST(LL arr[], int n)
{
    int x = (ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1;
    LL *st = new LL[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
int main()
{
    // freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
    int i,L,R,Q,n;
    LL max_left=0,max_right=0,max_mid=0,min_mid=0;
    n=get();
    double inner=0.0,outer=0.0,time=0.0;
    LL arr1[n+2];
    LL arr2[n+2];
   // memset(arr1,0,sizeof(arr1));
   // memset(arr2,0,sizeof(arr2));

    for(i=0;i<n;i++)
    {
        //SL(arr1[i]);
        arr1[i]=get_long();
        arr2[i]= -arr1[i];
    }
    LL *st1 = constructST(arr1, n);
    LL *st2 = constructST(arr2, n);
    Q=get();
    while(Q--)
    {
        L=get(); R=get();
        if(L>=1)
        {
            max_left= RMQ(st2,n,0,L-1);
            max_left= -max_left;
        }
        else max_left= 0;

        if(R<=n-2)
        {
            max_right= RMQ(st2,n,R+1,n-1);
            max_right= -max_right;
        }
        else max_right=0;

        max_mid= -RMQ(st2,n,L,R);
        min_mid= RMQ(st1,n,L,R);
       // cout<<max_left<<"\t"<<max_right<<"\t"<<max_mid<<"\t"<<min_mid<<endl;
        outer= max(max_left, max_right)+ min_mid;
        //cout<<"outer= "<<outer<<endl;
        inner= (max_mid+ min_mid)*1.0/2.0;
        //cout<<"inner= "<<inner<<endl;
        time= max(outer,inner);
        printf("%.1lf\n",time);
    }
    return 0;
}

