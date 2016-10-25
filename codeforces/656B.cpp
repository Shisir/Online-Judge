#include <bits/stdc++.h>

using namespace std;
int n,M[20],R[20];
double res;
int main() 
{	
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)	scanf("%d",&M[i]);
	for (int i = 0; i <n; ++i)	scanf("%d",&R[i]);
	
	
	printf("%lf\n",(double)n/(n+1));
	
	return 0;
}