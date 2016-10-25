#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,m,firstIndex=99999999,lastIndex=-1,firstLine,lastLine=-1;
	bool firstLn=false;
	scanf("%d%d",&n,&m);
	char line[n+1][m+1];
	for (int i = 0; i < n; ++i)	scanf("%s",line[i]);
	for (int i = 0; i < n; ++i)
	{
		for(int j=0; j<m; j++)
		{
			if(line[i][j]=='*' && firstLn==false)
			{
				firstLine=i;
				firstIndex=j;
				firstLn=true;
			}
			if(line[i][j]=='*')
			{
				if(firstIndex>j) firstIndex=j;
				if(lastIndex<j) lastIndex=j;
				lastLine=i;
			}
		}
	}
	//printf("%d %d %d %d\n",firstLine,lastLine,firstIndex,lastIndex );
	for(int i=firstLine; i<=lastLine; i++)
	{
		for(int j=firstIndex; j<=lastIndex; j++)
		{
			printf("%c",line[i][j] );
		}
		printf("\n");
	}

	return 0;
}