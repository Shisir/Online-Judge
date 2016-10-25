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
	double cx,cy,px,py,r,d;
	scanf("%d",&test);

	for(int t=1; t<=test; t++)
	{
		scanf("%lf%lf%lf%lf%lf",&cx,&cy,&r,&px,&py);
		d=sqrt((cx-px)*(cx-px) + (cy-py)*(cy-py));
		if(d<r) printf("Case %d: yes\n",t);
		else printf("Case %d: no\n",t);
	}	

	return 0;
}

