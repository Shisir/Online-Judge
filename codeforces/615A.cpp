#include <bits/stdc++.h>

using namespace std;
int arr[101];
int main() 
{	
	int n,m,a,b,c;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&c);
		for(int j=0; j<c; j++)
		{
			scanf("%d",&a);
			arr[a]=1;
		}
	}
	for(int i=1; i<=m; i++) if(arr[i]==0) return printf("NO\n"),0;
	return printf("YES\n"), 0;
}