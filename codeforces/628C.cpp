#include <bits/stdc++.h>

using namespace std;
int n,k,catalyst;
char s[100001];
int main() 
{	
	scanf("%d%d%s",&n,&k,s);
	for(int i=0; i<n; i++)
	{
		catalyst=min(k, max(s[i]-'a','z'-s[i]));
		s[i]-'a'>=catalyst? s[i]=s[i]-catalyst:s[i]=s[i]+catalyst;
		k-=catalyst;
	}
	k?puts("-1"):puts(s);
	return 0;
}