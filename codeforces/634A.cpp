#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int cnt=0,a,b;
	scanf("%d%d",&a,&b);

	for(int i=1; i<=a/2; i++)
	{
		if((i^(a-i))==b)cnt+=2,printf("%d %d\n",i,a-i);
	}
	printf("%d\n",cnt );
	return 0;
}