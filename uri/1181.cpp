#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a[12][12],sum=0;
	char ch;
	scanf("%c\n",&ch);
	for (int i = 0; i < 12; ++i)for(int j=0; j<12; j++)scanf("%lf",&a[i][j]);
	int l=11;
	for (int i = 7; i < 12; ++i,l--)
		for(int j=i+1;j<l; j++)
			sum+=a[i][j];

	if(ch=='S') printf("%.1lf\n",sum);
	else printf("%.1lf\n",sum/20);
	
	return 0;
}

