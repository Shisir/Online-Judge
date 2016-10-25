#include <bits/stdc++.h>

using namespace std;
int main() 
{	
	int n,a,b;
	double sum=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d%d",&a,&b);
		if(a==1001) sum+=b*1.50;
		else if(a==1002) sum+=b*2.50;
		else if(a==1003) sum+=b*3.50;
		else if(a==1004) sum+=b*4.50;
		else if(a==1005) sum+=b*5.50;
	}
	return printf("%.2lf\n",sum ), 0;
}