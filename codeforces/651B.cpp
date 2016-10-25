#include <bits/stdc++.h>

using namespace std;
int n,arr[1001],cnt;
int main() 
{	

	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	int j=1;
	for(int i=0; i<n-1; i++)
	{
		for(; j<n; j++)
		{
			if(arr[i]<arr[j]){ cnt++;j++;break;}
		}
	}
	printf("%d\n",cnt );
	return 0;
}