#include <bits/stdc++.h>

using namespace std;

double arr[1000001],phi= 0.57721566490153286060651209;

int main() 
{	
	for (int i = 1; i <1000001; ++i) arr[i]=arr[i-1]+1.0/i;
	int test,n;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		if(n<1000001) printf("Case %d: %.10lf\n",t,arr[n]);
		else printf("Case %d: %.10lf\n",t,log(n+.5)+phi);
	}
	return 0;
}