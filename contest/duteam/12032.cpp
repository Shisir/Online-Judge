#include <bits/stdc++.h>

using namespace std;
int temp,n,mini,previ,cnt;
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		scanf("%d",&previ);
		mini=previ,cnt=0;

		for (int i = 1; i < n; ++i)
		{
			scanf("%d",&temp);
			if(temp-previ>mini)mini=temp-previ,cnt=1;
			else if(temp-previ==mini)mini=temp-previ,cnt++;
			previ=temp;
			//printf("%d %d\n",mini,cnt );
		}
		if(cnt==0)printf("Case %d: %d\n",t,mini);
		else printf("Case %d: %d\n",t,mini+cnt-1);

	}
	return 0;
}