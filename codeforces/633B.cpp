#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=1; i<1000000001; i++)
	{
		int s=i,fuck=0;
		while(s%5==0)
		{
			s=s/5;
			fuck++;
		}
		cnt+=fuck;
		if(cnt>n) return printf("0\n"),0;
		if(cnt==n) return printf("5\n%d %d %d %d %d\n",i,i+1,i+2,i+3,i+4),0;
	}
	return 0;
}