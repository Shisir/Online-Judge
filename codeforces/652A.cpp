#include <bits/stdc++.h>

using namespace std;
int h1,h2,a,b,res,cnt;
int main() 
{	
	scanf("%d%d%d%d",&h1,&h2,&a,&b);
	res+=h1+8*a;
	if(res>=h2) return printf("0\n"),0;
	if(a<=b || (res-12*b+12*a)<res) return printf("-1\n"),0;
	while(res<h2)
	{
		res=res-12*b+12*a;
		cnt++;
	}
	printf("%d\n",cnt );
	return 0;
}