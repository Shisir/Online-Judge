#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	scanf("%d",&n);
	if(n==2) return printf("-1\n"),0;
	printf("15\n10\n");
	for(int i=1; i<n-1; i++) printf("%d\n",6*i);
	return 0;
}