#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,ans=0,t1,t2;
	char s[201];
	scanf("%d\n%s",&n,s);
	for(int i=0; i<n; i++)
	{
		t1=t2=0;
		for(int j=i; j<n; j++)
		{
			if(s[j]=='L') t1++;
			else if(s[j]=='R')t1--;
			else if(s[j]=='U')t2++;
			else t2--;
			if(t1==0 && t2==0) ans++;
		}
	}
	return printf("%d\n",ans), 0;
}