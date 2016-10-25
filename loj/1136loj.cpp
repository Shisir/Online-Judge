#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%lld", &a)
#define sff(a, b)   scanf("%lld %lld", &a, &b)

int main(void)
{
	long long int test,a,b;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		long long int ans=0;
		sff(a,b);

		if(a%3==0)
		{
			a-=2;
			ans--;
		}
		else if(a%3==2) a--;

		if(b%3==1)
		{
			b+=2;
			ans-=2;
		}
		else if(b%3==2)
		{
			b++;
			ans--;
		}

		ans+=(2*(b-a+1))/3;
		printf("Case %d: %lld\n",t,ans);

	}

	return 0;
}
