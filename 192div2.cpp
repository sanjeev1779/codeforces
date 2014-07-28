#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <cstring>
#include <set>
#include <cstdio>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define MAX_ 10000001
template <class T>
T gcd(T a,T b)
{
        T r;
        while(b!=0) {
                r=a%b;
                a=b;
                b=r;
        }
        return a;
}
vector<int>vec;
int array[MAX_];
void precompute()
{
        array[0]=array[1]=1;
        int i=2;
        while(i<sqrt(MAX_)) {
                if(array[i]==0) {
                        int j=2*i;
                        while(j<MAX_) {
                                array[j]=1;
                                j+=i;
                        }
                }
                i++;
        }
        i=2;
        while(i<MAX_){
            if(array[i]==0)vec.pb(i);
            i++;
        }
}
int main()
{
        int n,i=0;
        scanf("%d",&n);
        precompute();
        while(i<n){
              printf("%d\t",vec[i++]);
        }
        return 0;
}
