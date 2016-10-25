#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,a,b,prev;
	scanf("%d%d",&a,&b);
	scanf("%d",&prev);
	for(int i=1; i<b; i++)
	{
		scanf("%d",&n);
		if(abs(n-prev)>a) return printf("GAME OVER\n"),0;
		prev=n;
	}
	return printf("YOU WIN\n"),0;
}