#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		printf("Case %d: %d\n",t,max(a,max(b,c)));	
	}
	return 0;
}