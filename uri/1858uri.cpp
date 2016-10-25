#include <bits/stdc++.h>

using namespace std;
int n,num,pos=1001,mini=123;
int main()
{	

	/*freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);*/
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&num);
		if(mini>num)
		{
			pos=i+1;
			mini=num;
		}
	}
	printf("%d\n",pos);
	return 0;
}