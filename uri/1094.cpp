#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,c=0,r=0,s=0,total=0,n;
	char ch;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d %c\n",&n,&ch);
		total+=n;
		if(ch=='C') c+=n;
		else if(ch=='R') r+=n;
		else s+=n;	
	}
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",total,c,r,s,(double)(c*100)/total,(double)(r*100)/total,(double)(s*100)/total);
	return 0;
}