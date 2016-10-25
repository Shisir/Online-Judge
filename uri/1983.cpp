#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	double a,b,save,maxi=-1;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf%lf",&a,&b);
		if(b>maxi) maxi=b,save=a;
	}
	if(maxi<8) printf("Minimum note not reached\n");
	else printf("%.0lf\n",save);
	return 0;
}