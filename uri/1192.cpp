#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	char ch[4];
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%s",ch);
		if(ch[0]==ch[2]) printf("%d\n",(ch[0]-'0')*(ch[2]-'0'));
		else if(ch[1]>='A' && ch[1]<='Z') printf("%d\n",ch[2]-ch[0]);
		else printf("%d\n",ch[2]-'0'+ch[0]-'0');
	}
	return 0;
}