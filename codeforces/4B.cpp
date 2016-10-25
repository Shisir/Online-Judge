#include <bits/stdc++.h>
using namespace std;
int main() 
{
	long d,i,sumTime,x[30],y[30],maxTime=0,minTime=0,result=0;
	scanf("%d%d",&d,&sumTime);
	for (i=0;i<d;i++) 
	{
		scanf("%d%d",&x[i],&y[i]);
		minTime+=x[i];
		maxTime+=y[i];
	}
	if (maxTime>=sumTime & sumTime>=minTime) 
	{
		printf("YES\n");
		for (i=0;i<d;i++) 
		{
			minTime-=x[i];
			result=min(y[i],sumTime-minTime);
			cout << result << " ";
			sumTime-=result;
		}
	}
	else printf("NO\n");
}