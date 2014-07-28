#include<iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int i;
    int k=1;
    getline(cin,a);
    for(i=0;i<a.length();i++)
    {
        if(a[i]==' ' && a[i-1]!=' ')
        {
            k++;
        }
    }
    cout<<k;
}
