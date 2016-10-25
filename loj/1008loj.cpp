#include <bits/stdc++.h>

using namespace std;
/*#define max 10000001
long long int arr[max];*/

int main() 
{	
	int test;
	//long long int d=2;
	scanf("%d",&test);
	test++;
	/*arr[1]=1;
	for(int i=2; i<max;i++)
	{
		arr[i] = arr[i-1]+d;
		d+=2;
	}*/
	for(int t=1; t<test; t++)
	{
		long long int S,level,value;
		scanf("%lld",&S);
		if(S==1)
		{
			printf("Case %d: 1 1\n",t);
			continue;
		}
		level=ceil(sqrt(S));
		value=level*level-level+1;
		if(value==S) printf("Case %d: %lld %lld\n",t,level,level );
		else 
		{
			if(level%2==0)
			{
				if(value>S) printf("Case %d: %lld %lld\n",t,level-(value-S),level);
				else printf("Case %d: %lld %lld\n",t,level,level-(S-value) );
			}
			else
			{
				if(value<S) printf("Case %d: %lld %lld\n",t,level-(S-value),level);
				else printf("Case %d: %lld %lld\n",t,level,level-(value-S) );
			}
		} 
	}

	return 0;
}

