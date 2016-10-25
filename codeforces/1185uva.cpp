#include <bits/stdc++.h>

using namespace std;
const int maxi=10000001;
int factdigit[maxi],n;
int main() 
{	
	double sum=0;
	for(int i=1; i<maxi; i++) 
	{
		sum+=log10(i);
		factdigit[i]=(int)sum;
	}
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		printf("%d\n",factdigit[n]+1);	
	}
	return 0;
}