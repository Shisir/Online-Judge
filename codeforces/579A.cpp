#include <bits/stdc++.h>

using namespace std;

int main() 
{
	long long k,a,b;
	scanf("%I64d",&k);
	scanf("%I64d%I64d",&a,&b);
	if(a>b) swap(a,b);
	if(b<0)
	{
		printf("%I64d\n",abs(b/k)-abs(a/k)+1);
	}	
	else
	{
		if(a<=0) printf("%I64d\n",abs(a/k)+abs(b/k)+1);
		else printf("%I64d\n",b/k-(a-1)/k);
	}

	return 0;
}

