#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,sum;
	while(scanf("%d",&n))
	{
		sum=0;
		if(!n) break;
		if(n&1)n+=1;

		for (int i = 0; i <5; ++i)
		{
			sum+=n;
			n+=2;
		}
		printf("%d\n",sum);
	}
	return 0;
}

