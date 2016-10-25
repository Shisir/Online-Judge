#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main() 
{	
	int n,m,k,p,u,res=0;
	memset(arr,1000001,sizeof arr);
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0; i<n; i++)scanf("%d%d",&p,&u),arr[p]=min(u,arr[p]);
	for(int i=1; i<=m; i++) res+=arr[i];
	return printf("%d\n",min(res,k)), 0;
}