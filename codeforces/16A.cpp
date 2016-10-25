#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,m;
	scanf("%d%d",&n,&m);
	char line[n][m];
	scanf("%s",line[0]);
	for(int i=1; i<m; i++) if(line[0][i]!=line[0][0]) {printf("NO\n"); return 0;}
	for(int t=1; t<n; t++)
	{
		scanf("%s",line[t]);
		for(int i=1; i<m; i++) if(line[t][i]!=line[t][0]) {printf("NO\n"); return 0;}
		if(line[t][0]==line[t-1][0]) {printf("NO\n"); return 0;}
	}
	printf("YES\n");

	return 0;
}
