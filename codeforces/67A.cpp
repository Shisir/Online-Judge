#include <bits/stdc++.h>

using namespace std;
char s[1001];
int main() 
{	
	int n,l,r,ll,rr;
	scanf("%d%s",&n,s);
	for(int i=0;i<n;++i)
	{
		l=i-1,r=i,ll=rr=1;
		while(s[l]!='L'&&l>=0)ll+=(s[l]=='R'),--l;
		while(s[r]!='R'&&r<n) rr+=(s[r]=='L'),++r;
		printf("%d ",ll>rr?ll:rr);
	}
	return 0;
}