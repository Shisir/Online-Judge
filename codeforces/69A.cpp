#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,a,b,c,sum1=0,sum2=0,sum3=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		sum1+=a,sum2+=b,sum3+=c;
	}
	if(sum1 || sum2 || sum3) return printf("NO\n"),0;
	return printf("YES\n"),0;
}