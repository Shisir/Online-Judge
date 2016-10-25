#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		int a,b,sum=0;
		scanf("%d%d",&a,&b);
		if(a&1);
		else a++;

		for (int i = 0; i <b; ++i)
		{
			sum+=a;
			a+=2;
		}	
		printf("%d\n",sum);
	}
	return 0;
}

