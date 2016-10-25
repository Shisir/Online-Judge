#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main() 
{	
	int n;
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)	scanf("%d",&arr[i]);

	sort(arr,arr+n);

	for (int i = 0; i <n/2; ++i)
	{
		printf("%d %d ",arr[i],arr[n-i-1]);
	}
	if(n&1)printf("%d\n",arr[n/2]);
	return 0;
}