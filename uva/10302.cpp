#include <bits/stdc++.h>

using namespace std;
long long m;
int main() 
{	
	int n;
	while(scanf("%d",&n)!=EOF) 
	{
		if(n&1)m=(n+1)/2,m*=n,printf("%lld\n",m*m);
		else m=n/2,m*=(n+1),printf("%lld\n",m*m);
	}
	return 0;
}
