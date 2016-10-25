#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(!a && !b) printf("Origem\n");
	else if(!a && b) printf("Eixo Y\n");
	else if(a && !b) printf("Eixo X\n");
	else if(a<0 && b<0) printf("Q3\n");
	else if(a>0 && b>0) printf("Q1\n");
	else if(a<0 && b>0) printf("Q2\n");
	else printf("Q4\n");
	return 0;
}

