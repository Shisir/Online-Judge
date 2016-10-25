#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,n,a,b;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d%d%d",&a,&b,&n);
		if(a<b) swap(a,b);
		if(a-b<=n) printf("0\n");
		else printf("%d\n",a-b-n);
	}
	return 0;
}