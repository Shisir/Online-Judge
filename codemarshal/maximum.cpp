#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int test,max,a,b;
	scanf("%d",&test);

	for(int t=1; t<=test; t++)
	{
		scanf("%d%d%d",&max,&a,&b);
		if(max<a) max=a;
		if(max<b) max=b;
		printf("Case %d: %d\n",t,max);
	}	

	return 0;
}

