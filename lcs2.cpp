#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
using namespace std;

void max(string a,string b,int n)
{
    int count=0,x=-1,prev=0,i,j,k;
    for(i=0;i<n;i++)
    {
        x=-1;
        for(j=i;j<n;j++)
        {
            for(k=x+1;k<n;k++)
            {
                if(a[j]==b[k])
                {
                    count++;
                    x=k;
                    break;
                }
            }
        }
        if(prev<count)
        {
            prev=count;
        }
        count=0;
    }
    cout<<prev;
}

int main() {
    string a,b;
    int n;
    cin>>a;
    cin>>b;
    n=a.length();
    max(a,b,n);
    return 0;
}
