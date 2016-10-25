#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double n;
	scanf("%lf",&n);
	if(n<2000) {printf("Isento\n");return 0;}
	if(n>=2000.01 && n<=3000){n=abs(n-2000); printf("R$ %.2lf\n",n*.08 );}
	else if(n>=3000.01 && n<=4500) {n=abs(n-2000);printf("R$ %.2lf\n",n*.18 );}
	else {n=abs(n-2000); printf("R$ %.2lf\n",n*.28 );}
	return 0;
}

