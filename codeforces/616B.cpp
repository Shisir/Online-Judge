#include <bits/stdc++.h>

using namespace std;
int main() 
{	
	int n,m,mini,temp,Min=-1,k=-1;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)
	{
		mini=1000000009;
		for(int j=0; j<m; j++)
		{
			scanf("%d",&temp);
			if(temp<mini) mini=temp;
		}
		if(Min<mini) Min=mini;
	}
	return printf("%d\n",Min), 0;
}