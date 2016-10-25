#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int test;
	double a,b,c;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		printf("%.1lf\n",(a*2+b*3+5*c)/10);
	}	

	return 0;
}