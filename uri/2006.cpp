#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,t,count=0;
	scanf("%d",&n);
	for(int i=0; i<5; i++)
	{
		scanf("%d",&t);
		if(t==n) count++;
	}
	return printf("%d\n",count), 0;
}