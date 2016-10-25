#include <bits/stdc++.h>

using namespace std;
int p[1001],t[1001],n,c,limaksum,radsum,temp[1001],radt[1001];
int main(void)
{
	scanf("%d%d",&n,&c);
	for (int i = 1; i <=n; ++i) scanf("%d",&p[i]);
	for (int i = 1; i <=n; ++i) scanf("%d",&t[i]);
	
	for (int i = 1,sum=0; i <=n; ++i)
	{
		sum+=t[i];
		limaksum+=max(0,p[i]-c*sum);
	}
	for (int i = n,sum=0; i >0; i--)
	{
		sum+=t[i];
		radsum+=max(0,p[i]-c*sum);
	}
	
	if(limaksum>radsum) printf("Limak\n");
	else if(limaksum<radsum) printf("Radewoosh\n");
	else printf("Tie\n");
	return 0;
}