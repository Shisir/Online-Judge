#include <bits/stdc++.h>

using namespace std;
long long n,r,mod=1000003,f[1000001];
long long bigmod(long long a, long long b)
{
	if(b==0) return 1;
	if(b&1) return ((a%mod)*bigmod(a,b-1))%mod;
	long long half=bigmod(a,b/2);
	return (half*half)%mod;
}
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	f[0]=1;
	f[1]=1;
	
	for(int i=2; i<1000001; i++) f[i]=(i*f[i-1])%mod;
	
	for(int t=1;t<test; t++)
	{
		scanf("%lld%lld",&n,&r);
		if(n<r)printf("Case %d: 0\n",t);
		else if(n==r || !r) printf("Case %d: 1\n",t);
		else printf("Case %d: %lld\n",t, (((f[n]*bigmod(f[r],mod-2))%mod)*bigmod(f[n-r],mod-2))%mod);

	}

	return 0;
}