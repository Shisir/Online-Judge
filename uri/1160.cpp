#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		double a,b,c,d;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		if((b+b*d)-(a+a*c)>100) printf("Mais de 1 seculo.\n");
		else printf("\n");
	}
	return 0;
}

