#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,a,b,sum;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		if(a>b) swap(a,b);
		if(a&1)a+=2;
		else a+=1;
		for (int i = a; i <b; i+=2)	sum+=i;
		printf("%d\n",sum); 
	}
	return 0;
}

