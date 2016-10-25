#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int t,t2,a,b,c,d,e,f,v,h,m;
	scanf("Dia %d\n%d : %d : %d\n",&t,&a,&b,&c);
	scanf("Dia %d\n%d : %d : %d",&t2,&d,&e,&f);
	v=(((t2*24+d)*60+e)*60+f)-(((t*24+a)*60+b)*60+c);
	d=v/(24*60*60);
	v=v%(24*60*60);
	h=v/(60*60);
	v=v%(60*60);
	m=v/60;
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,v%60);
	return 0;
}

