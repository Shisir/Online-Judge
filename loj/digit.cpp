#include <bits/stdc++.h>

using namespace std;
double fact[1000001];
int main() 
{	
	for(int i=1; i<1000001; i++) fact[i]=log(i)+fact[i-1];
	int test,n,b;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d%d",&n,&b);
		printf("Case %d: %lld\n",t,(long long)(fact[n]/(fact[b]-fact[b-1]))+1);
	}	

	return 0;
}