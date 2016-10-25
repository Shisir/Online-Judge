#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,a,b;
	scanf("%d%d%d",&a,&b,&n);
	for(int i=-1000; i<=1000; i++)
		if(fabs(a*pow(i,n)-b)<.0001) return printf("%d\n",i),0;
	printf("No solution\n");
	return 0;
}

