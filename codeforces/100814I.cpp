#include <bits/stdc++.h>

using namespace std;
int main(void)
{
	int a,b,test;
	scanf("%d",&test);
	for(int t=1; t<=test; t++)
	{
		scanf("%d%d",&a,&b);
		if(a==b) printf("Square\n");
		else printf("Rectangle\n");
	}
	return 0;
}