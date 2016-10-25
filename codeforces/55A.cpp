#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	scanf("%d",&n);
	if(n&(n-1)) return printf("NO\n"),0;
	return printf("YES\n"),0;
}