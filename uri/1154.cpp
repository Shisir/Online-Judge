#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,sum=0,i=0;
	while(scanf("%d",&n))
	{
		if(n<0) break;
		sum+=n;
		i++;
	}
	printf("%.2lf\n",(double)sum/i);
	return 0;
}

