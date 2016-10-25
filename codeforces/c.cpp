#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	long long n,res=0;
	scanf("%I64d",&n);
	if(n==1) return printf("2\n"),0;
	for(int i=1; i<=n; i++)
	{
		res+=pow(2,i);
	}
	
	printf("%I64d\n",res );
	return 0;
}