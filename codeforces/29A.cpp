#include <bits/stdc++.h>

using namespace std;
int x[101],d[101];
int main() 
{	
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)scanf("%d%d",&x[i],&d[i]);
	for(int i=0; i<n; i++)
	for(int j=i+1; j<n; j++)
		if(x[i]==x[j]+d[j] && x[j]==x[i]+d[i])
			return printf("YES\n"),0;
	printf("NO\n");			
	return 0;
}

