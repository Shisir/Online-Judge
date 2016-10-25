#include <bits/stdc++.h>

using namespace std;
int n,m,total,row[10001],collumn[1001],ans;
char ch[1001][1001],hudai;
int main() 
{	
	scanf("%d%d",&n,&m);
	scanf("%c",&hudai);
	for(int i=0; i<n; i++)
	{
		scanf("%s",ch[i]);

		for(int j=0; j<m; j++)
		{
			if(ch[i][j]=='*') total++,row[i]++;
		}
	}

	for (int i = 0; i <m; ++i)
	{
		for (int j = 0; j <n; ++j)
		{
			if(ch[j][i]=='*') collumn[i]++;
		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j <m; ++j)
		{
			int ans=row[i]+collumn[j];
			if(ch[i][j]=='*') ans--;
			if(ans==total) return printf("YES\n%d %d\n",i+1,j+1 ),0;
		}
	}
	printf("NO\n");

	return 0;
}