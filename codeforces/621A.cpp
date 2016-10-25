#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,l=0;
	scanf("%d",&n);
	vector<long long>odd;
	long long res=0;
	for (int i = 0; i < n; ++i)
	{
		int t;
		scanf("%d",&t);
		if(t&1) odd.push_back(t);
		else res+=t;
	}
	sort(odd.begin(),odd.end());
	if(odd.size()%2!=0) l=1;
	for(; l<odd.size(); l++) res+=odd[l];
	printf("%I64d\n",res);
	return 0;
}