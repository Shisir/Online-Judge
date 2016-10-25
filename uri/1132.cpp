#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	if(a>b) swap(a,b);

	for (int i = a; i <=b; ++i)	if(i%13) sum+=i;
	printf("%d\n",sum);
	return 0;
}

