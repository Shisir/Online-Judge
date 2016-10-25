#include <bits/stdc++.h>

using namespace std;
int arr[100001];
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		memset(arr,0,sizeof arr);
		int n,temp,maxi=-1,num;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			scanf("%d",&temp);
			arr[temp]++;
			if(maxi==arr[temp])
			{
				if(temp>num)num=temp;
			}
			else if(maxi<arr[temp])
			{
				maxi=arr[temp];
				num=temp;
			}
		}
		printf("Case %d: %d %d\n",t,num,maxi);
	}
	return 0;
}