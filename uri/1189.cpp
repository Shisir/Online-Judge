#include <bits/stdc++.h>

using namespace std;
double arr[12][12],sum;
int main() 
{	
	char ch;
	scanf("%c",&ch);
	for(int i=0; i<12; i++)for(int j=0; j<12; j++) scanf("%lf",&arr[i][j]);
	for(int i=1,l=0; i<6; i++,l++)
	 for(int j=0; j<=l; j++)sum+=arr[i][j];
	for(int i=6,l=4; i<11; i++,l--)
	 for(int j=l; j>-1; j--)sum+=arr[i][j];
	if(ch=='S') printf("%.1lf\n",sum);
	else printf("%.1lf\n",sum/12);
	return 0;
}

