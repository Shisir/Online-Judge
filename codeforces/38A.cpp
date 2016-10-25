#include <bits/stdc++.h>

using namespace std;
int arr[101];
int main() 
{	
	int n,a,b,sum=0;
	scanf("%d",&n);
	for(int i=2; i<=n; i++) scanf("%d",&arr[i]);
	scanf("%d%d",&a,&b);
	for(int i=a+1; i<=b; i++)sum+=arr[i];
	return printf("%d\n",sum ), 0;
}

