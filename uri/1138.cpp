#include <bits/stdc++.h>

using namespace std;
int arr[11];
int main() 
{	
	int a,b,temp;
	while(scanf("%d%d",&a,&b))
	{
		if(!a && !b) break;
		memset(arr,0,sizeof arr);
		for(int i=a; i<=b; i++)
		{
			temp=i;
			while(temp)
			{
				arr[temp%10]++;
				temp/=10;
			}
		}
		printf("%d",arr[0]);
		for(int i=1; i<10; i++) printf(" %d",arr[i]);
		printf("\n");	
	}
	return 0;
}