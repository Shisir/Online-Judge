#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,n,min=9999999,pos=0;
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a);
		if(min>a) 
		{
			min=a;
			pos=i;
		}

	}
	printf("Menor valor: %d\nPosicao: %d\n",min,pos);
	return 0;
}

