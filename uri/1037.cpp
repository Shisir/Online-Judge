#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int res=0,a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		res=0;
		if(!a && !b && !c && !d) break;
		if(a>c)
		{
			res+=a-c;
			b=
		}
		res+=abs(a-c);
		b=(b+res)%8;
		res+=abs(b-d);
		
	}
	return printf("%d\n",res), 0;
}