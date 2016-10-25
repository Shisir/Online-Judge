#include <bits/stdc++.h>

using namespace std;

#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)

int main(void)
{
	int test,cur,n,count,digit;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		sff(n,digit);
		cur = digit;
		count=1;
		while(1)
		{
			
			if(cur%n==0)
			{
				 printf("Case %d: %d\n",t,count);
				 break;
			}
			cur=(cur*10+digit)%n;
		    count++;
				
		}
	}


	return 0;
}
