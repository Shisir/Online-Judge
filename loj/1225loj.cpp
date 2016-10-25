#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main(void)
{
	int test;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		char n[11];
		bool flag=true;
		scanf("%s",n);
		int len=strlen(n);

		for (int i = 0; i < len/2; ++i)
		{
			if(n[i]!=n[len-i-1])
			{
				flag=false;
				break;
			}
		}


		if(flag) printf("Case %d: Yes\n", t);
		else printf("Case %d: No\n", t);
	}

	return 0;
}
