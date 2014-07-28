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
#define pb push_back
#define mp make_pair
using namespace std;
int main() {
	// your code goes here
	vector<int> v;
	int n,temp,idx=-1;
	cin>>n;
	cin>>temp;
	int maxm=-1,sec=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		if(temp>maxm)
		{
			idx=i;maxm=temp;
		}
	}
	 sort(v,v+n+1);
	cout<<idx<<" "<<maxm-sec;
	return 0;
}
