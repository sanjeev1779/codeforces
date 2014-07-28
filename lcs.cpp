#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int LCSLength(string X,string Y);

int main()
{
    string first ("HELLO");
    string second ("HLOCKKE");
    int LCS;

    //ifstream inData;
    //inData.open("test.dat");

    //inData >> first >> second;
    //inData.close();

    LCS = LCSLength(first,second);
    cout << "The LCS is: " << LCS << endl;
    cout << first << endl;
    cout << second << endl;
    return 0;
}

int LCSLength(string X,string Y)
{
    int m = X.size();
    int n = Y.size();
    int L[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || j==0)
                L[i][j] = 0;
            else if(X[i-1]==Y[j-1]){
                L[i][j] = L[i-1][j-1]+1;

            }
            else
                L[i][j] = max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}
