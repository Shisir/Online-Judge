#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int a,b,x,y,gc;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	gc=__gcd(x,y);
	x/=gc;
	y/=gc;
	gc=min(a/x,b/y);
	printf("%d %d\n",x*gc,y*gc);
	return 0;
}

