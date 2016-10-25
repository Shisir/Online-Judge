#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	return printf("%d\n",max(max(a+b+c,(a+b)*c),max(a*(b+c),a*b*c))), 0;
}