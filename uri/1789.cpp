#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,temp,maxi=-1;
	while(scanf("%d",&n)!=EOF)
	{
		maxi=-1;
		for(int i=0; i<n; i++)
		{
			scanf("%d",&temp);
			if(temp>maxi) maxi=temp;
		}
		if(maxi>19) printf("3\n");
		else if(maxi>9 && maxi<20) printf("2\n");
		else printf("1\n");
	}
	
	return 0;
}