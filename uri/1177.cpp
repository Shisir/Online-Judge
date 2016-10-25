#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	scanf("%d",&n);
	for (int i = 0;;)
	{
		for (int j=0; j<n; j++) 
		{
			printf("N[%d] = %d\n",i,j);
			i++;
			if(i==1000)return 0;
		}
	}
	return 0;
}