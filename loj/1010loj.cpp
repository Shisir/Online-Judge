#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,m,n;
	scanf("%d",&test);
	test++;

	for(int t=1; t<test; t++)
	{
		scanf("%d%d",&m,&n);
		if(m>n) swap(m,n);

	    if(m==1) printf("Case %d: %d\n",t,n);
		else if(m==2) printf("Case %d: %d\n",t,((n/4)*4+min(n%4,2)*2));
		else  printf("Case %d: %d\n",t,(m*n+1)>>1);

	}

	return 0;
}