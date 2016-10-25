#include <bits/stdc++.h>

using namespace std;
int convert(int n)
{
	int sum=0,i=1;
	while(n)
	{
		if(n%10!=0) sum+=(n%10)*i,i*=10;
		n/=10;
	}
	return sum;
}
int main() 
{	
	int a,b;
	scanf("%d%d",&a,&b);
	if(convert(a)+convert(b)==convert(a+b)) return printf("YES\n"),0;
	return printf("NO\n"),0;
}