#include <bits/stdc++.h>

using namespace std;
int n,num[12],res;
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	num[0]=2;
	for(int t=1;t<test; t++)
	{
		res=0;
		scanf("%d",&n);
		for (int i =1; i <=n; ++i) scanf("%d",&num[i]);
		for (int i = 0; i <n; ++i) if(num[i+1]>num[i]) res+=ceil((double)(num[i+1]-num[i])/5);	
		printf("Case %d: %d\n",t,res);
	}
	return 0;
}