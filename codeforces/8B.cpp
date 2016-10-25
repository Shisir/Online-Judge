#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,index;
	double vb,vs,x[101],xu,yu,minTime=0x3f3f3f3f,minDistance=0x3f3f3f3f,dis,Time;
	scanf("%d%lf%lf",&n,&vb,&vs);

	for (int i = 0; i < n; ++i) scanf("%lf",&x[i]);
	scanf("%lf%lf",&xu,&yu);	
	if(yu<0) yu*=-1;
	
	for(int i=1; i<n; i++)
	{
		 dis=sqrt( (xu-x[i])*(xu-x[i]) + yu*yu);
		 Time=(x[i]-x[0])/vb+dis/vs;

		 if(Time<minTime)
		 {
		 	minTime=Time;
		 	index=i;
		 }
		 if(minTime==Time && dis<minDistance) index=i;
	}
	printf("%d\n",index+1);

	return 0;
}

