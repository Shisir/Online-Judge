#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,a=2,b=1;
	scanf("%d",&n);
	for(int i=1; i<n; i++)
	{
		printf("%d ",a);
		b++;
		a=a+b;
		if(a>n)a%=n;
	}
	return 0;
}