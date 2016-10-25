#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,sum;
	scanf("%d",&a);
	while(scanf("%d",&b))
	{
		if(b<=0) continue;
		else
		{
			sum=a;a++;
			for (int i = 1; i <b; ++i)
			{
				sum+=a;a++;
			}
			printf("%d\n",sum);
			break;
		}
	}
	
	return 0;
}

