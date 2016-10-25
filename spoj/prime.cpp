#include <bits/stdc++.h>

using namespace std;
const int maxi=1000000000;
int arr[maxi];
void seive()
{
	for(int i=2; i<31624; i++)
	{
		if(arr[i]==0)
		{
			int a=i*i,l=0;
			for(int j=a; j<maxi;j=(i*l++)+a) arr[j]=1;
		}
	}
}
int main() 
{	
	seive();
	int test;
	printf("dsf\n");
	scanf("%d",&test);
	test++;
	arr[0]=arr[1]=1;
	for(int t=1;t<test; t++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++) if(!arr[i]) printf("%d\n",i);	
		printf("\n");
	}
	return 0;
}