#include <bits/stdc++.h>

using namespace std;
int arr[10000];
int main() 
{	
	int n,j=0;
	scanf("%d",&n);
	for (int i = 1,max=sqrt(n)+1; i <max; ++i) if(n%i==0) 
	{
		printf("%d\n",i);
		arr[j]=n/i;j++;
	}
	for (int i = j-1; i >-1 ; i--) printf("%d\n",arr[i]);
	return 0;
}

