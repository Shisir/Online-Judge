#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main() 
{	
	int n,t,count=0,maxi=-10001;
	scanf("%d",&n);
	for(int i=0; i<n; i++){scanf("%d",&t);arr[t]++;}
	for(int i=1;i<1001; i++)
	{
		if(arr[i]!=0)count++;
		maxi=max(maxi,arr[i]);
	}
	printf("%d %d\n",maxi,count );
	return 0;
}