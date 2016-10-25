#include <bits/stdc++.h>

using namespace std;
long long res;
int main(void)
{
	int a,b,cnt=1,n;
	scanf("%d%d",&n,&a);
	for(int i=1; i<n; i++)
	{
		scanf("%d",&b);
		if(a==b) res+=cnt++;
		else cnt=1;
		a=b;
	}	
	return printf("%I64d\n",res+n), 0;
}