#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,fact=1;
	scanf("%d",&n);
	for(int i=2; i<=n; i++) fact*=i;
	return printf("%d\n",fact), 0;
}