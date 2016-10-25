#include <bits/stdc++.h>

using namespace std;
int r1,c1,r2,c2;

int solve()
{
	if(((r1+c1)&1)!=((r2+c2)&1)) return -1;
	if(abs(r1-r2)==abs(c1-c2)) return 1;
	return 2;
}
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
		if(solve()<0) printf("Case %d: impossible\n",t);
		else printf("Case %d: %d\n",t,solve());
	}
	return 0;
}