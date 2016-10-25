#include <bits/stdc++.h>

using namespace std;

int main() 
{
	char ch[11],s='A';
	gets(ch);
	for (int i = 0;ch[i]; ++i) if(ch[i]>s)s=ch[i];
	for (int i = 0;ch[i]; ++i) if(ch[i]==s) printf("%c",s);
	printf("\n");	
	return 0;
}

