#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,n,in=0,out=0;
	scanf("%d",&a);
	for (int i = 0; i <a; ++i)
	{
		scanf("%d",&n);
		if(n>9 && n<21) in++;
		else out++;
	}
	printf("%d in\n%d out\n",in,out);
	return 0;
}

