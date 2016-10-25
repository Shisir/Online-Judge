#include <bits/stdc++.h>

using namespace std;
int arr[100];
int main() 
{	
	int n;
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	if(arr[0]>15) return printf("15\n"),0;
	for (int i = 1; i <n; ++i)
	{
		if(arr[i]-arr[i-1]>15)
		{
			return printf("%d\n",arr[i-1]+15),0;
		}
	}
	if(arr[n-1]+15>90)printf("90\n");
	else printf("%d\n",arr[n-1]+15);
	return 0;
}