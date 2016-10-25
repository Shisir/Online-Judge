#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	while(scanf("%d",&n))
	{
		if(!n)break;
		for (int i = 1; i <n; ++i) printf("%d ",i);
		printf("%d\n",n);	
	}
	return 0;
}

