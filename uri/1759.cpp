#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	scanf("%d",&n);
	if(n==0) return 0;
	if(n==1) return printf("Ho!\n");
	printf("Ho");
	for(int i=2; i<n; i++)
	{
		printf(" Ho");
	}
	printf(" Ho!\n");
	return 0;
}