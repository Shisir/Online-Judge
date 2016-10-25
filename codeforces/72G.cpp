#include <bits/stdc++.h>

using namespace std;
int arr[25];
int main() 
{	
	int n;
	scanf("%d",&n);
	arr[0]=arr[1]=1;
	for(int i=2; i<=n; i++) 
	{
		arr[i]=arr[i-1]+arr[i-2];
		arr[i-2]=arr[i-1];
		arr[i-1]=arr[i];
	}
	return printf("%d\n",arr[n]), 0;
}