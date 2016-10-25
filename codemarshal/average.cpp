#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,n,a,sum;
	scanf("%d",&test);
	
	for (int i = 1; i <=test; ++i)
	{
		scanf("%d",&n);
		sum=0;
		for(int j=0; j<n;j++)
		{
			scanf("%d",&a);
			sum+=a;
		}
		printf("Case %d: %d\n",i,sum/n);
	}

	return 0;
}

