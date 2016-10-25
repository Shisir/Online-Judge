#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int arr[6],cnt[6],mini=-1,sum=0;
	for (int i = 0; i <5; ++i)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	for (int i = 0; i <5; ++i)
	{
		for (int j = i+1; j < 5; ++j)
		{
			if(arr[i]==arr[j]) cnt[i]++;
		}
	}

	for (int i = 0; i <5; ++i)
	{
		if(cnt[i]==5) return printf("%d\n",2*arr[0]),0;
	}

	for (int i = 0; i <5; ++i)
	{
		int su=0;
		for (int j = i+1; j <5; ++j)
		{
			
		}
	}

	return 0;
}