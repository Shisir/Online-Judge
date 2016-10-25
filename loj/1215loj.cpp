#include <bits/stdc++.h>

using namespace std;
long long a,b,L,c,m,g;
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%lld%lld%lld",&a,&b,&L);
		m=a/__gcd(a,b)*b;

		if(m>L || L%m!=0)
		{
			printf("Case %d: impossible\n",t);
		}	
		else
		{
			c=L/m;

			if(c!=1)
			{
				while((g=__gcd(m,c))!=1)
				{
					c*=g,m/=g;
				}
			}
			printf("Case %d: %lld\n",t,c);
		}
	}
	
	return 0;
}