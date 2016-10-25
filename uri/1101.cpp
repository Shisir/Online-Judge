#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,sum;
	while(1)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		if(a<=0 || b<=0) break;
		if(a>b) swap(a,b);

		for (int i = a; i <=b; ++i)
		{
			sum+=i;
			printf("%d ",i);
		}
		printf("Sum=%d\n",sum);
	}

	return 0;
}

