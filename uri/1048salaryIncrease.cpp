#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a;
	scanf("%lf",&a);
	if(a<=400)
	{
		printf("Novo salario: %.2lf\n",a+a*.15);
		printf("Reajuste ganho: %.2lf\n",a*.15);
		printf("Em percentual: 15 %%\n");
	}
	else if(a>=400.01 && a<=800)
	{
		printf("Novo salario: %.2lf\n",a+a*.12);
		printf("Reajuste ganho: %.2lf\n",a*.12);
		printf("Em percentual: 12 %%\n");
	}
	else if(a>=800.01 && a<=1200)
	{
		printf("Novo salario: %.2lf\n",a+a*.10);
		printf("Reajuste ganho: %.2lf\n",a*.10);
		printf("Em percentual: 10 %%\n");
	}
	else if(a>=1200.01 && a<=2000)
	{
		printf("Novo salario: %.2lf\n",a+a*.07);
		printf("Reajuste ganho: %.2lf\n",a*.07);
		printf("Em percentual: 7 %%\n");
	}
	else
	{
		printf("Novo salario: %.2lf\n",a+a*.04);
		printf("Reajuste ganho: %.2lf\n",a*.04);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}

