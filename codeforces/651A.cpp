#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,min=0;
	scanf("%d%d",&a,&b);

	while(a>0 && b>0)
	{
		if(a<2 && b<2) break;
		if(a<b)
		{
			a+=1;
			b-=2;
		}
		else 
		{
			b+=1;
			a-=2;
		}
		min++;
	}
	printf("%d\n",min );
	return 0;
}