#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    char a,b,c,d,e,f;
    int i=0,j;
    cin >> s;
    while(1)
    {
        if(i+2>=s.size())
        break;
        a=s[i];
        b=s[i+1];
        c=s[i+2];
        if(a==b && b==c)
            s.erase(i,1);
        else
            i++;
    }
    i=0;
    if(s.size()>5)
    {
        while(1)
        {
            if(i+5>=s.size())
            break;
            a=s[i];
            b=s[i+1];
            c=s[i+2];
            d=s[i+3];
            e=s[i+4];
            f=s[i+5];
            if(a==b && c==d && e==f)
            s.erase(i+2,1);
            else
            i++;
        }
    }
    if(s.size()<4)
    {
        cout << s;
        return 0;
    }
    i=0;
    while(1)
    {
        if(i+3>=s.size())
        break;
        a=s[i];
        b=s[i+1];
        c=s[i+2];
        d=s[i+3];
        if(a==b && c==d)
        s.erase(i+1,1);
        else
        i++;
    }
    cout << s;
    return 0;
}
