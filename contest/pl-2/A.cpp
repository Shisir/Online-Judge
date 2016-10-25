#include <bits/stdc++.h>

using namespace std;
int n,m,maxi,mini,cnt;
int main() 
{	

	scanf("%d %d",&n,&m);
	maxi=mini=m;
	for(int i=1; i<n; i++)
	{
		scanf("%d",&m);
		if(m>maxi)
		{
			cnt++;
			maxi=m;
		}
		else if(m<mini)
		{
			cnt++;
			mini=m;
		}
	}
	printf("%d\n",cnt );
	return 0;
}