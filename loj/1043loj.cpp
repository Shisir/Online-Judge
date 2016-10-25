#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		double a,b;
		scanf("%lf%lf%lf%lf",&a,&b,&b,&b);
		printf("Case %d: %.10lf\n",t,a*sqrt(b/(1+b)));	
	}
	return 0;
}