#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	if(a && d>0) printf("R1 = %.5lf\nR2 = %.5lf\n",(-b+d)/(2*a),(-b-d)/(2*a));
	else printf("Impossivel calcular\n");
	return 0;
}

