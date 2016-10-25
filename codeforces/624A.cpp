#include <bits/stdc++.h>
using namespace std;
int arr[3000];
int main() 
{	
	int n;
	long long res=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	sort(arr,arr+n);
	res=arr[n-1];
	for(int i=n-2; i>-1; i--)
	{
		arr[i]=min(arr[i+1]-1,arr[i]);
		res+=max(0,arr[i]);
	}
	return printf("%I64d\n",res),0;
}