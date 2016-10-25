#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,al=0,gas=0,diesel=0;
	while(scanf("%d",&n))
	{
		if(n==4) break;
		else if(n==1) al++;
		else if(n==2) gas++;
		else if(n==3) diesel++;
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,gas,diesel );
	return 0;
}

