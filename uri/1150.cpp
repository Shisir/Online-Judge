#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,b,cnt=0,sum=0;
	scanf("%d",&n);
	while(scanf("%d",&b)) if(b>n) break;
	for (int i = n;; ++i)
	{
		sum+=i;
		if(sum>b){cnt++;break;}
		cnt++;
	}
	printf("%d\n",cnt );
	return 0;
}