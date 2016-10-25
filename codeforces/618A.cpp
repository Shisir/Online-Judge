#include <bits/stdc++.h>

using namespace std;
int arr[100001];
int main() 
{	
	int n,k=1;
	scanf("%d",&n);
	arr[0]=1,n--;
	while(n--)
	{
		arr[k++]=1;
		while(arr[k-1]==arr[k-2]) arr[k-2]++,k--;
	}
	for (int i = 0; i <k; ++i) printf("%d ",arr[i]);
	return 0;
}