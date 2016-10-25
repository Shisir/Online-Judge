#include <bits/stdc++.h>

using namespace std;
int main() 
{	
	int n,a;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a);
		if(a<2015) printf("%d D.C.\n",2015-a);
		else printf("%d A.C.\n",a-2014);
	}
	return 0;
}