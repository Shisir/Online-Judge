#include <bits/stdc++.h>

using namespace std;
long long n;
int main() 
{
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%lld",&n);
		long long mini=111111111111;
		for(long long i=1,lo=sqrt(n),tmp; i<=lo; i++)
		{
			tmp=n/i;
			if(tmp*i==n) mini=min(mini,abs(tmp-i));
		}
		printf("%lld\n",mini);
	}	

	return 0;
}