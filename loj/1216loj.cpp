#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define PI acos(-1)

int main() 
{
	int test;
	sf(test);

	for(int t=1;t<=test; t++)
	{
		double r1,r2,h,p,volume,R;
		scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
		R=r2+(r1-r2)*(p/h);
		volume=(PI*p*(R*R+R*r2+r2*r2))/3.00;
		printf("Case %d: %.9lf\n",t,volume );
	}	

	return 0;
}

