// codeforces
#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
    int n,i,j,si,maxm,x,idx;
    S(n);
    int total=0,l;
    vector<int>vec[n+2];
    for(i=0;i<n;i++)
    {
        S(si);
        total+=si;
        for(j=0;j<si;j++)
        {
            S(x);
            vec[i].pb(x);
        }
    }
    long int ciel=0, jiro=0;
    for(int k=1;k<=total;k++)
    {
        //find for ciel
        maxm=-1;
        if(k%2)
        {
            for(i=0;i<n;i++)
            {
                l=vec[i].size();
                if(l>1 && vec[i][0]>maxm)
                {
                    maxm=vec[i][0];
                    idx=i;
                }
            }
            if(maxm>0){
                ciel+= maxm;// add to ciel
                vec[idx].erase(vec[idx].begin()+0); // remove it
            }
        }
        else
        {
             for(i=0;i<n;i++)
             {
                l=vec[i].size();
                if(l>1 && vec[i][l-1]>maxm)
                {
                    maxm=vec[i][l-1];
                    idx=i;
                }
             }

        if(maxm>0){
                jiro+= maxm; // add to ciel
                l= vec[idx].size()-1;
                vec[idx].erase(vec[idx].begin()+l);
            }
        }
    }

    cout<<ciel<<" "<<jiro<<endl;
return 0;
}
