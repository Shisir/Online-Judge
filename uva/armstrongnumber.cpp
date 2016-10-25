#include <bits/stdc++.h>

using namespace std;
int t,n,pw,sum,temp;
int main() 
{
	scanf("%d",&t);
	for (int i = 0; i <t; ++i)
	{
		scanf("%d",&n);
		temp=n,sum=0;
		pw=log10(n)+1;
		while(temp)
		{
			sum+=pow(temp%10,pw);
			temp/=10;
		}
		if(sum==n) printf("Armstrong\n");
		else printf("Not Armstrong\n");
	}

	return 0;
}