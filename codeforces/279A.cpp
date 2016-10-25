#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,m,temp,res=0;	
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&temp);
		if(m-temp>=0)res++,m-=temp;
	}
	return printf("%d\n",res),0;
}