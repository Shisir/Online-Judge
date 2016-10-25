#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a=-1,b=-1,temp;
	int cnt=0;
	scanf("%lf",&temp);
	if(temp>=0 && temp<=10) {a=temp;cnt=1; }
	while(1)
	{
		scanf("%lf",&temp);
		if(temp>=0 && temp<=10)
		{
			cnt++;
			if(cnt==1)a=temp;
		}
		if(cnt==2)
		{
			printf("media = %.2lf\n",(a+temp)/2);
			return 0;
		}
		else printf("nota invalida\n");
	}
	return 0;
}

