#include <bits/stdc++.h>

using namespace std;
int n,arr[200001],mini=111111111;
char ch[200001],f[100];
int main() 
{	
	
	scanf("%d",&n);
	
	scanf("%c",&f[0]);
	for (int i = 0; i <n; ++i) scanf("%c",&ch[i]);
	for (int i = 0; i <n; ++i) scanf("%d",&arr[i]);
	ch[n]='h';

	for (int i = 0; i <n; ++i)
	{
		if(ch[i]=='R' && ch[i+1]=='L')
		mini=min(mini, arr[i+1]-arr[i]);
	}	
	if(mini==111111111) printf("-1\n");
	else printf("%d\n",mini/2);

	return 0;
}