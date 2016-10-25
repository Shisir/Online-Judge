#include <bits/stdc++.h>

using namespace std;
int n,m,cnt, arr[101][101];
int main() 
{	
	while(scanf("%d",&n))
	{
		if(n==0) break;
		scanf("%d",&m);
		int cnt=0;
		for(int i=0; i<n; i++)
		{
			string line;
			cin>>line;
			for(int j=0; j<m; j++)
					arr[i][j]=line[j]-'0';
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(arr[i][j]==1)
				{
					int maxi=m;
					for(int k=i; k<n; k++)
					{
						for(int l=j; l<maxi; l++)
						{
							if(arr[k][l]==1) cnt++;
							else
							{
								maxi=l;
								break;
							}	
						}
					}
				}
			}
		}
		printf("%d\n",cnt);   					
	}
	return 0;
}