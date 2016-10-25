#include <bits/stdc++.h>

using namespace std;
map<int,int>mp;
int main() 
{	
	int n;
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		mp[n]++;	
	}
	for(map<int,int>::iterator it=mp.begin(); it!=mp.end(); it++) printf("%d aparece %d vez(es)\n",it->first,it->second);
	return 0;
}