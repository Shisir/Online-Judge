#include <bits/stdc++.h>

using namespace std;
char n[1000],ch;
int main(void)
{
	int s;
	scanf("%s",n);
	for(int i=0; n[i]; i++)if(n[i]=='.'){ch=n[i+1],s=i;break;}
	if(n[s-1]=='9') return printf("GOTO Vasilisa.\n"),0;
	else if(ch-'0'>4) n[s-1]=n[s-1]+1;
	for(int i=0; i<s; i++)printf("%c",n[i]);
	return 0;
}