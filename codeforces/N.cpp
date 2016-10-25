#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a,b,c,x1,x2,nischaok;
	scanf("%lf%lf%lf",&a,&b,&c);
	nischaok=sqrt(b*b-4*a*c);
	x1=(-b+nischaok)/(2*a);
	x2=(-b-nischaok)/(2*a);
	if(x1>x2)printf("%lf\n%lf\n",x1,x2);
	else printf("%lf\n%lf\n",x2,x1);
	return 0;
}