#include <bits/stdc++.h>

using namespace std;
char s[300001];
long long ans=0;
int main() 
{	
	gets(s);
	for(int i=1;s[i]; i++) ans+=((s[i]-'0')%4==0),((s[i-1]-'0')*10+s[i]-'0')%4==0?ans+=i:0;

	return printf("%I64d\n",ans+=((s[0]-'0')%4==0)), 0;
}