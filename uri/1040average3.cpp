#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a,b,c,d,score=-1232,avg;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&score);
	avg=(2*a+3*b+4*c+d)/10;
	printf("Media: %.1lf\n",avg);
	if(avg>=7) printf("Aluno aprovado.\n");
	else if(avg<5) printf("Aluno reprovado.\n");
	else if(avg>=5 && avg<=6.9) printf("Aluno em exame.\n");
	if(score==-1232) return 0;
	printf("Nota do exame: %.1lf\n",score);
	avg=(avg+score)/2;
	if(avg>=5) printf("Aluno aprovado.\n");
	else if(avg<=4.9) printf("Aluno reprovado.\n");
	printf("Media final: %.1lf\n",avg);
	return 0;
}

