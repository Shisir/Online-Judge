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
		char operation[100];
		int k,sum=0,n;
		sf(n);
		printf("Case %d:\n",t);
		for(int i=0; i<n; i++)
		{
			scanf("%s",operation);
			if(strcmp(operation,"donate")==0)
			{
				sf(k);
				sum+=k;
			}
			else printf("%d\n",sum );
		}
		
	}


	return 0;
}
