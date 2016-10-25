#include <bits/stdc++.h>

using namespace std;
char ch[100005];
int main() 
{	
	long long res=0,a;
	map<char,int>mp;
	scanf("%s",ch);
	for(int i=0; ch[i]; i++) mp[ch[i]]++;
	for(map<char,int>::iterator it=mp.begin(); it!=mp.end(); it++)a=it->second, res+=a*a;	
	return printf("%I64d\n",res),0;
}