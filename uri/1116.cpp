#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,a,b;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d%d",&a,&b);
		if(!b) printf("divisao impossivel\n");
		else printf("%.1lf\n",(double)a/b);
	}
	return 0;
}

