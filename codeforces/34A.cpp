#include <bits/stdc++.h>

using namespace std;
int arr[102];
int main() 
{	
	int n,min=10001,in1,in2,j;
	scanf("%d",&n);
	scanf("%d",&arr[1]);
	for(int i=2; i<=n; i++)	{scanf("%d",&arr[i]); if(abs(arr[i]-arr[i-1])<min) min=abs(arr[i]-arr[i-1]),in1=i,in2=i-1;}
	if(abs(arr[n]-arr[1])<min) min=abs(arr[n]-arr[1]),in1=n,in2=1;	
	return printf("%d %d\n",in2,in1),0;
}

