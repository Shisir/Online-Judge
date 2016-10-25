#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,n;
	scanf("%d",&n);
	for(int i=0; i<3; i++)
	{
		scanf("%d%d",&a,&b);
		if(a==n) n=b;
		else if(b==n) n=a;
	}
	printf("%d\n",n);

	return 0;
}