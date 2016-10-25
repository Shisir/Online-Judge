#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,m,loop;
	scanf("%d",&n);
	m=n;
	if(n%2!=0) n++;
	loop=n/2;
	for(int i=1;i<=loop; i++,m--)
	{
		if(i==m) printf("%d ",i);
		else printf("%d %d ",i,m);
	}
	return 0;
}