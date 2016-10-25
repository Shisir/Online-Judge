#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,a=0,b=1,c=1;
	scanf("%d",&n);
	printf("0");
	for (int i = 1; i <n; ++i)
	{
		printf(" %d",c);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
	return 0;
}

