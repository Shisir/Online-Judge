#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main() 
{	
	int n,count=1,maxi=-1;
	scanf("%d",&n);
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	for(int i=0; i<n; i++)
	{
		count=1;
		for(int j=i+1,cur=arr[i]; j<n; j++) {if(cur<arr[j]) break;count++;cur=arr[j];}
		for(int j=i-1,cur=arr[i]; j>-1; j--) {if(cur<arr[j]) break;count++;cur=arr[j];}
		maxi=max(maxi,count);
	}	
	return printf("%d\n",maxi),0;
}