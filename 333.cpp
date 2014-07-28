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
int main()
{

string str;
long long ans[27];
int cnt[27], flag[27];
int i, j, t;
cin>>str;
		t = 0;
		memset(ans, sizeof(ans), 0);
		memset(cnt, sizeof(cnt), 0);
		memset(flag, sizeof(flag), 0);
		for(i = 0; i < str.length(); i++)
		{
			if(flag[str[i]-'a'])
			{
				cnt[flag[str[i]-'a']] += cnt[flag[str[i]-'a']-1];
				for(j = flag[str[i]-'a']-1; j >= 1; j--)
					cnt[j] = cnt[j-1];
			}
			else
			{
				for(j = 27; j >= 1; j--)
					cnt[j] = cnt[j-1];
				t++;
			}
			cout<<"hi";
			for(j = 0; j < 27; j++)
				if((!flag[str[i]-'a'] && flag[j]) || (flag[j] && flag[j] < flag[str[i]-'a']))
					flag[j]++;
			if(flag[str[i]-'a'] == 1)
				cnt[1]++;
			else
				cnt[1] = 1;

			flag[str[i]-'a'] = 1;
			for(j = 1; j <= 27; j++)
				ans[j] += cnt[j];
		}
		printf("%d\n", t);
		for(i = 1; i <= t; i++)
			printf("%I64d\n", ans[i]);

	return 0;


}
