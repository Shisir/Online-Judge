#include <bits/stdc++.h>

using namespace std;
long long cx,cy,r,px,py,d;
int main() 
{	
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%lld%lld%lld%lld%lld",&cx,&cy,&r,&px,&py);
		d=sqrt((px-cx)*(px-cx)+(py-cy)*(py-cy));
		if(d<r) printf("Case %d: yes\n",i);
		else printf("Case %d: no\n",i);
	}
	
	return 0;
}