#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,x,count=0;
	scanf("%d%d",&n,&x);

	for(int i=1; i<=n; i++)	if(x%i==0 && x/i<=n) count++;
	
	printf("%d\n",count);

	return 0;
}
