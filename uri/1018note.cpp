#include <bits/stdc++.h>

using namespace std;
int note[]={100, 50, 20, 10, 5, 2},temp;
double coin[]={1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
int main() 
{
	double n;
	scanf("%lf",&n);
	printf("NOTAS:\n");
	temp=n;
	n-=temp;
	for (int i = 0; i <6; ++i)
	{
		 printf("%d nota(s) de R$ %d.00\n",temp/note[i],note[i]);
		 if(temp/note[i])temp-=note[i]*(temp/note[i]);
	}
	n+=temp;
	printf("MOEDAS:\n");
	for (int i = 0; i <6; ++i)
	{
		 int t=(int)(n/coin[i]);
		 if(t){ printf("%d moeda(s) de R$ %.2lf\n",t,coin[i] );n-=(coin[i]*t);}
		 else printf("0 moeda(s) de R$ %.2lf\n",coin[i]);
	}
	
	return 0;
}

