#include <bits/stdc++.h>

using namespace std;

int perfect(int num)
{
	int sum=0;

	for (int i = 1; i <=num/2; ++i) if(num%i==0) sum+=i;
	return sum;
}

int main() 
{
	int test,n;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		if(perfect(n)==n) printf("%d eh perfeito\n",n);
		else printf("%d nao eh perfeito\n",n);
	}	

	return 0;
}

