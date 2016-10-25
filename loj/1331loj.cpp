#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{
	int test;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		double r1,r2,r3,a,b,c,angleC,angleB,angleA,s,area,area2;
		scanf("%lf%lf%lf",&r1,&r2,&r3);
		a=r1+r2;
		b=r1+r3;
		c=r2+r3;
		angleC=acos((a*a+b*b-c*c)/(2*a*b));
		angleB=acos((a*a+c*c-b*b)/(2*a*c));
		angleA=acos((c*c+b*b-a*a)/(2*c*b));
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		area2=area-(.5)*(r1*r1*angleC+r2*r2*angleB+r3*r3*angleA);
		printf("Case %d: %.9lf\n",t,area2);
	}


	return 0;
}

