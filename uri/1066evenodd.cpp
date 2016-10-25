#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,cnto=0,cnte=0,cntp=0,cntn=0;
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",&n);
		if(n<0)cntn++;
		else if(n>0) cntp++;
		if(n&1)cnto++;
		else cnte++;
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",cnte,cnto,cntp,cntn );
	return 0;
}

