#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,n;
	scanf("%d",&a);

	for (int i = 0; i < a; ++i)
	{
		scanf("%d",&n);
		if(n==0) printf("NULL\n");
		else if(n&1)
		{
			if(n<0) printf("ODD NEGATIVE\n");
			else printf("ODD POSITIVE\n");
		}
		else
		{
			if(n<0) printf("EVEN NEGATIVE\n");
			else printf("EVEN POSITIVE\n");	
		}
	}
	return 0;
}

