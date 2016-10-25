#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a,sum=0;
	int count=0;
	for (int i = 0; i < 6; ++i)
	{
		scanf("%lf",&a);
		if(a>0) sum+=a,count++;	
	}
	printf("%d valores positivos\n%.1lf\n",count,sum/count);
	return 0;
}

