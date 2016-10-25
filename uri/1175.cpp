#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a[20];

	for (int i = 19; i >-1; i--) scanf("%d",&a[i]);
	for (int i = 0; i < 19; ++i) printf("N[%d] = %d\n",i,a[i]);
	return 0;
}

