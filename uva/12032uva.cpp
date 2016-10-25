#include <bits/stdc++.h>

using namespace std;
int n,arr[100001];
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		int maxi=-111111;
		for (int i = 1; i <=n; ++i)
		{
		 	scanf("%d",&arr[i]);
		 	maxi=max(maxi,arr[i]-arr[i-1]);
		}
		int result=maxi;
		for (int i = 1; i <=n; ++i)
		{
			if(arr[i]-arr[i-1]>maxi){result++;break;}
			if(arr[i]-arr[i-1]==maxi) maxi--;
		}
		printf("Case %d: %d\n",t,result);

	}
	return 0;
}