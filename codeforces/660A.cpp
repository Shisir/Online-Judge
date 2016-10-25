#include <bits/stdc++.h>

using namespace std;
int arr[1001],n,res[10001],lo,fr;

int main() 
{	
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	res[0]=arr[0];
	for (int i = 1; i <n; ++i)
	{
		if(__gcd(arr[i-1],arr[i])!=1)
		{
			fr++;
			for(int j=2;j<1000000001; j++)
			{
				if(__gcd(arr[i-1],j)==1 && __gcd(arr[i],j)==1)
				{
					res[++lo]=j;
					break;
				}
			}
		}
		res[++lo]=arr[i];
	}

	printf("%d\n",fr );
	for (int i = 0; i <=lo; ++i)
	{
		printf("%d ",res[i] );
	}
	return 0;
}