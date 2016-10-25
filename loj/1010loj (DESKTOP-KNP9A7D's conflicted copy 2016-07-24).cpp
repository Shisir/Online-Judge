#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)

int main() 
{	
	int test,m,n;
	sf(test);
	test++;

	for(int t=1; t<test; t++)
	{
		sff(m,n);
		if(m>n) swap(m,n);

	    if(m==1) printf("Case %d: %d\n",t,n);
		else if(m==2) printf("Case %d: %d\n",t,((n/4)*4+min(n%4,2)*2));
		else  printf("Case %d: %d\n",t,(m*n+1)>>1);

	}

	return 0;
}