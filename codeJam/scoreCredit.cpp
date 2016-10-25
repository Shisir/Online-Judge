#include <bits/stdc++.h>

using namespace std;
int arr[100001];
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		int n,credit,r1,r2;
		scanf("%d%d",&credit,&n);
		for (int i = 0; i <n; ++i)
		{
			scanf("%d",&arr[i]);
		}
		for (int i = 0; i <n; ++i)
		{
			for (int j = i+1; j <n; ++j)
			{
				if(arr[i]+arr[j]==credit)
				{
					r1=i+1,r2=j+1;
					goto l1;
				}
			}
		}
		l1:
		printf("Case #%d: %d %d\n",t,r1,r2);

		
	}
	return 0;
}