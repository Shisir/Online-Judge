#include <bits/stdc++.h>

using namespace std;
int arr[111];
int main() 
{	
	int n,m,a,b;
	scanf("%d%d",&n,&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d%d",&a,&b);
		for(int j=a; j<=b; j++) arr[j]++;
	}
	for(int i=1; i<=n; i++) if(arr[i]!=1) return printf("%d %d\n",i,arr[i]),0;
	return printf("OK\n"), 0;
}