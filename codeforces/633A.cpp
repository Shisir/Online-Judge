#include <bits/stdc++.h>

using namespace std;
int arr[10000];
int main() 
{	
	int n,a,b,as,asd;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	if(b%a==0 || b%n==0) return printf("Yes\n"),0;
	for(int i=0; i<=b; i++)
	{
		for(int j=0; j<=b; j++)
		{
			if(n*i+a*j==b) return printf("Yes\n"),0;
			if(n*i+a*j>b) break;
		}
	}
	printf("No\n");

	return 0;
}