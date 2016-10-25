#include <bits/stdc++.h>

using namespace std;

int main() 
{	
    long long test,n,a[62];
	a[0]=0,a[1]=1,a[2]=1;
	for (int i = 3; i <61; ++i)
	{
		a[i]=a[i-1]+a[i-2];
	}
	scanf("%lld",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%lld",&n);
		printf("Fib(%lld) = %lld\n",n,a[n]);
	}
	return 0;
}

