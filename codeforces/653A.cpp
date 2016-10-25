#include <bits/stdc++.h>

using namespace std;
bool arr[1001];
int cnt,n;
int main() 
{	
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		int temp;
		scanf("%d",&temp);
		arr[temp]=1;
	}
	for (int i = 2; i <1001; ++i)
	{
		if(arr[i]&& arr[i-1]&& arr[i-2]) return printf("YES\n"),0;
	}
	printf("NO\n");
	return 0;
}