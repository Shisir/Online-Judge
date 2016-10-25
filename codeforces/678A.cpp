#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=n+1; ; i++)
	{
		if(i%k==0) return printf("%d\n",i),0;
	}
	return 0;
}