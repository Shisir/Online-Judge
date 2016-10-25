#include <bits/stdc++.h>

using namespace std;
int arr[100005];
int main() 
{	
	int n,count1=0,count2=0;
	double average=0;
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&arr[i]);
		average+=arr[i];
	}
	average/=n;

	for (int i = 0; i <n; ++i)
	{
		if(average>arr[i]) count1+=floor(average)-arr[i];
		else if(average<arr[i]) count2+=arr[i]-ceil(average);
	}
	printf("%d\n",max(count1,count2));

	return 0;
}