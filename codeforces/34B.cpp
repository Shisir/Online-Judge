#include <bits/stdc++.h>

using namespace std;
int arr[102];
int main() 
{	
	int n,m,sum=0;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)scanf("%d",&arr[i]);
	sort(arr,arr+n);
	for(int i=0; i<m; i++) {if(arr[i]>0) break; sum+=abs(arr[i]);}
	return printf("%d\n",sum),0;
}

