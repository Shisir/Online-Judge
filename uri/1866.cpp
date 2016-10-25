#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		if(n&1) printf("1\n");
		else printf("0\n");	
	}
	return 0;
}