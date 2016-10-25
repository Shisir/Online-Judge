#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,c,d,v;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a==c && b==d) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else if(a<c)
	{
		v=(c*60+d)-(a*60+b);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",v/60,v%60);
	}
	else
	{
		v=((24+c)*60+d)-(a*60+b);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",v/60,v%60);	
	}

	return 0;
}

