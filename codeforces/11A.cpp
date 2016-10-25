#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main(void)
{
	int n,d,x,y,count=0;
	sfff(n,d,x);

	for (int i = 1; i <n; ++i)
	{
		sf(y);
		if(x>=y)
		{
			x=(x-y)/d+1;
			count+=x;
			y+=(x*d);
		}
		x=y;
	}
	printf("%d\n",count);

	return 0;
}