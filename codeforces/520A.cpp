#include <bits/stdc++.h>

using namespace std;
map<char,char>mp;
char ch[101];
int main(void)
{
	int n;
	scanf("%d",&n);
	scanf("%s",ch);
	for(int i=0; i<n; i++)
	{
		if(mp.find( ch[i]!=mp.end() )) return printf("NO\n"),0;
		mp[ch[i]]=ch[i];
	}
	return printf("YES\n"), 0;
}