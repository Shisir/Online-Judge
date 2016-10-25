#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i = 1; i <=b;i++)	
	{
		if(i%a==0) printf("%d\n",i);
		else printf("%d ",i);
	}
	return 0;
}

