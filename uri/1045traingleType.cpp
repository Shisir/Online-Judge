#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a[4];
	scanf("%lf%lf%lf",&a[0],&a[1],&a[2]);
	sort(a,a+3);
	if(a[2]>=a[0]+a[1]) {printf("NAO FORMA TRIANGULO\n");return 0;}
	if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1]) printf("TRIANGULO RETANGULO\n");
	else if(a[2]*a[2]>a[0]*a[0]+a[1]*a[1]) printf("TRIANGULO OBTUSANGULO\n");
	else if(a[2]*a[2]<a[0]*a[0]+a[1]*a[1]) printf("TRIANGULO ACUTANGULO\n");
	if(a[0]==a[1]&& a[0]==a[2]) printf("TRIANGULO EQUILATERO\n");
	if((a[0]==a[1]&& a[0]!=a[2]) || (a[0]==a[2]&& a[0]!=a[1]) || (a[1]==a[2]&& a[1]!=a[0]) ) printf("TRIANGULO ISOSCELES\n");
	return 0;
}

