#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a[]={10,11,12,13};
	do{
		printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
	}while(next_permutation(a,a+4));
	return 0;
}