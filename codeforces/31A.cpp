#include <bits/stdc++.h>

using namespace std;
int arr[101];
int main() 
{	
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);	
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	for(int k=j+1; k<n; k++)	
	if(arr[i]==arr[j]+arr[k]) return printf("%d %d %d\n",i+1,j+1,k+1),0;
	printf("-1\n");
	return 0;
}

