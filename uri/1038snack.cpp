#include <bits/stdc++.h>

using namespace std;
double snack[]={0,4.00,4.50,5.00,2.00,1.50};
int main() 
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Total: R$ %.2lf\n",snack[a]*b);
	return 0;
}

