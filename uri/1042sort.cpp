#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a[4],b[4];
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	b[0]=a[0],b[1]=a[1],b[2]=a[2],b[3]=a[3];
	sort(a,a+3);
	for (int i = 0; i < 3; ++i) printf("%d\n",a[i]);
	printf("\n");
	for (int i = 0; i < 3; ++i) printf("%d\n",b[i]);	
	return 0;
}

