#include <bits/stdc++.h>

using namespace std;
double arr[12][12],sum;
int main() 
{	
	char ch;
	scanf("%c",&ch);
	for(int i=0; i<12; i++)for(int j=0; j<12; j++) scanf("%lf",&arr[i][j]);
	for(int i=7,k=5,l=6; i<12; i++,k--,l++) for(int j=k; j<=l; j++)sum+=arr[i][j];
	if(ch=='S') printf("%.1lf\n",sum);
	else printf("%.1lf\n",sum/12);
	return 0;
}

