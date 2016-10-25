#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
	scanf("%d",&n);
	printf("%d",n/3600);
	n%=3600;
	printf(":%d",n/60);
	n%=60;
	printf(":%d\n",n);	

	return 0;
}

