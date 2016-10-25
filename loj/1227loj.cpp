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
		int n,p,q,count=0;
		sfff(n,p,q);
		int arr[n];

		for(int i=0; i<n; i++) scanf("%d",&arr[i]);
		for(int i=0; i<n; i++)
		{
			if(arr[i]<=q && count+1<=p)
			{
				count++;
				q-=arr[i];
			}
		}	

		printf("Case %d: %d\n",t,count);
			
	}

	return 0;
}