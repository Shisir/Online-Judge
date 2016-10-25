#include <bits/stdc++.h>

using namespace std;
int arr[501];
int main() 
{	
	for(int i=1,j=2; i<=500;)
	{
		arr[i]=i;
		i+=j;
		j++;
	}
	int n;
	scanf("%d",&n);
	if(arr[n]) printf("YES\n");
	else printf("NO\n");
	return 0;
}