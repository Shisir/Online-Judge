#include <bits/stdc++.h>

using namespace std;
long long arr[100001],mod=1000007,arr2[100001],sum=0,test,k,c,n;
int main() 
{	
	scanf("%lld",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		memset(arr,0,sizeof arr);
		memset(arr2,0,sizeof arr2);
		sum=0LL;
		scanf("%lld%lld%lld%lld",&k,&c,&n,&arr[0]);
		
		for(int i=1; i<n; i++) arr[i]=((arr[i-1]*k)+c)%mod;
		sort(arr,arr+n);
		arr2[0]=arr[0];
		for(int i=1; i<n; i++) arr2[i]=arr2[i-1]+arr[i];

		for(long long i=0; i<n-1; i++) sum+=abs((n-1-i)*arr[i]-(arr2[n-1]-arr2[i]));
		
		printf("Case %d: %lld\n",t,sum );
	}
	return 0;
}