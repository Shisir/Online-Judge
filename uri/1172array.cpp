#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&n);
		if(n<=0) printf("X[%d] = %d\n",i,1);
		else printf("X[%d] = %d\n",i,n);
	}
	return 0;
}

