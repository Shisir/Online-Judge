#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int test;
	scanf("%d ",&test);
	for(int t=1; t<=test; t++)
	{
		long long n,sum;
		scanf("%I64d ",&n);
		sum=(n*(n+1))/2;
		for(int i=1; i<=n; i*=2) sum-=2*i;
		printf("%I64d\n",sum);
	}
	return 0;
}
