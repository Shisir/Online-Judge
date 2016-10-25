#include <bits/stdc++.h>

using namespace std;
int n,cur,range;
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		vector<int> num(n);
		int res=0;
		for (int i = 0; i <n; ++i)	scanf("%d",&num[i]);	
		
		sort(num.begin(), num.end());

		for (int i = 0; i <n; ++i)
		{
			for (int j = i+1; j <n; ++j)
			{
			 	cur=num[i]+num[j];
			 	range=lower_bound(num.begin(), num.end(),cur)-num.begin();
			 	res+=max(0,range-j-1);
			}
		}
		printf("Case %d: %d\n",t,res);
	}
	return 0;
}

