#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,n,temp;
	map<int,int>save;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		save.clear();	
		scanf("%d",&n);
		bool f=true;	
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				scanf("%d",&temp);
				save[temp]++;
				if(save[temp]>n)f=false;
			}
		}
		if(f)printf("Case %d: yes\n",t);
		else printf("Case %d: no\n",t);
	}
	return 0;
}