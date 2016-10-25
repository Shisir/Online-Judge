#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,arr[101],j=0;
	while(scanf("%d%d",&a,&b)!=EOF) 
	{
		arr[j]=__gcd(a,b);
		if(arr[j]>5) printf("Noel\n");
		else printf("Gnomos\n");
		j++;
	}
	for (int i = j-1;i>-1; i--) printf("%d ",arr[i]);
	printf("\n");	
	return 0;
}

