#include <bits/stdc++.h>

using namespace std;
set<int>save;
int main() 
{	
	int a,b,n,s;
	scanf("%d%d",&a,&b);
	a=__gcd(a,b),s=sqrt(a)+1;
	for(int i=1; i<s; i++) if(!(a%i))save.insert(i),save.insert(a/i);
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d%d",&a,&b);
		a>*--save.upper_bound(b)?printf("-1\n"):printf("%d\n",*--save.upper_bound(b));;
	}
	return 0;
}