#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int test;
	scanf("%d",&test);
	for(int t=1; t<=test; t++)
	{
		double a,b,s,c,area;
		scanf("%lf%lf%lf",&a,&b,&c);
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Case %d: %.10lf\n",t,area);
	}	



	return 0;
}

