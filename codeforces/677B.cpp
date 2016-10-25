#include <bits/stdc++.h>

using namespace std;
int arr[100001],n,h,k,res;
int main() 
{	
	scanf("%d%d%d",&n,&h,&k);
	for (int i = 0; i <n; ++i)	scanf("%d",&arr[i]);
	sort(arr,arr+n);

	int sum=0;
	for (int i = 0; i <n;)
	{
		while(1)
		{
			if(sum+arr[i]<=h)sum+=arr[i],i++;
			else break;

			if(i==n-1)break;
		}
		res+=sum/k;
		sum=sum%k;
		if(sum+arr[i]>h)res++,sum=0;
		
	}
	printf("%d\n",res);


	return 0;
}