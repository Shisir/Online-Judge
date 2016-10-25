#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main() 
{	
	int n,d,count=0,j=0;
	scanf("%d%d",&n,&d);
	for(int i=0; i<n; i++)for(j=0,scanf("%d",&arr[i]);j<i; j++) if(abs(arr[j]-arr[i])<=d)count++;
	return printf("%d\n",count<<1), 0;
}

