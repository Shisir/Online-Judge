#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int b1,g1,c1,b2,g2,c2,b3,g3,c3,total,max;
	string color;
	while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF)
	{
		total=b1+g1+c1+b2+g2+c2+b3+g3+c3;
		max=b1+c2+g3,color="BCG";
		if(max<b1+g2+c3)max=b1+g2+c3,color="BGC";
		if(max<c1+b2+g3)max=c1+b2+g3,color="CBG";
		if(max<c1+g2+b3)max=c1+g2+b3,color="CGB";
		if(max<g1+b2+c3)max=g1+b2+c3,color="GBC"; 
		if(max<g1+c2+b3)max=g1+c2+b3,color="GCB"; 
		cout<<color<<" "<<total-max<<endl;
	}
	return 0;
}