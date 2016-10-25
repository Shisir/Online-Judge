#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b) printf("O JOGO DUROU %d HORA(S)\n",b-a);
	else printf("O JOGO DUROU %d HORA(S)\n",b+24-a);
	return 0;
}

