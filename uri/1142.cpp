#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	scanf("%d",&n);

	for (int i = 0,a=1,b=2,c=3; i <n; ++i,a+=4,b+=4,c+=4) printf("%d %d %d PUM\n",a,b,c);
	return 0;
}

