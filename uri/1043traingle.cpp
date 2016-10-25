#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a[4],b[4];
	scanf("%lf%lf%lf",&a[0],&a[1],&a[2]);
	b[0]=a[0],b[1]=a[1],b[2]=a[2];
	sort(a,a+3);
	if(a[0]+a[1]>a[2]) printf("Perimetro = %.1lf\n",b[0]+b[1]+b[2]);
	else printf("Area = %.1lf\n",(b[0]+b[1])*b[2]*.5);
	return 0;
}

