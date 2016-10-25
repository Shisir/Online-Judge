#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int test;
	double Ox,Oy,Ax,Ay,Bx,By,a,c,theta;
	scanf("%d",&test);

	for(int t=1; t<=test; t++)
	{
		scanf("%lf%lf%lf%lf%lf%lf",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
		c=sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
		a=sqrt(((Ox-Bx)*(Ox-Bx))+((Oy-By)*(Oy-By)));
		theta=acos((2*a*a-c*c)/(2*a*a));
		theta=a*theta;
		printf("Case %d: %lf\n",t,theta);

	}

	return 0;
}

