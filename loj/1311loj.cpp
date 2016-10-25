#include <bits/stdc++.h>

using namespace std;
double v1,v2,v3,a1,a2,dis,bird;
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
		dis=(v1*v1*a2+a1*v2*v2)/(2*a1*a2);
		bird=max(v1/a1,v2/a2)*v3;
		printf("Case %d: %.9lf %.9lf\n",t,dis,bird);
	}
	return 0;
}