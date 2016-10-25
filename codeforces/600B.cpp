#include <bits/stdc++.h>

using namespace std;
int a[200009],b[200009];

int binary(int value,int start, int end)
{
	if(a[start]>value) return 0;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(mid==end) return end+1;
		if(a[mid]<=value && a[mid+1]>value) return mid+1;
		if(a[mid]<=value) return binary(value,mid+1,end);
		else return binary(value,start,mid-1);
	}
}
int main() 
{
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i = 0; i <n; ++i) scanf("%d",&a[i]);	
	for (int i = 0; i <m; ++i) scanf("%d",&b[i]);
	sort(a,a+n);
	
	for (int i = 0; i <m; ++i) printf("%d ",binary(b[i],0,n-1));
	printf("\n");	
	return 0;
}

