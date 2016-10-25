#include <bits/stdc++.h>

using namespace std;
int arr[10]={6,2,5,5,4,5,6,3,7,6};
int main() 
{	
	int a,b,temp,sum=0;
	scanf("%d%d",&a,&b);
	for(int i=a; i<=b; i++)
	{
		temp=i;
		while(temp)
		{
			sum+=arr[temp%10];
			temp/=10;
		}
	}
	return printf("%d\n",sum),0;
}