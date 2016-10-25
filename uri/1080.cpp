#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int max=-11111111,pos,n;
	for (int i = 1; i < 101; ++i)
	{
		scanf("%d",&n);
		if(n>max)
		{
			pos=i;
			max=n;
		}
	}
	printf("%d\n%d\n",max,pos);
	return 0;
}

