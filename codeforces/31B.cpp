#include <bits/stdc++.h>

using namespace std;
char ch[202];
int main() 
{	
	vector<char>email;
	scanf("%s",ch);
	int l=strlen(ch),in=0;
	bool f=true;
	ch[l]='a';
	for(int i=0; i<l; i++)email.push_back(ch[i]);
	if(ch[0]=='@' || ch[l-1]=='@') return printf("No solution\n"),0;
	for(int i=1; i<l; i++)
	{
		if(ch[i]=='@')
		{
			f=false;
			if(ch[i+1]=='@' || ch[i+2]=='@' )return printf("No solution\n"),0;
		}
	}
	if(f) return printf("No solution\n"),0;
	for(int i=email.size()-1; i>-1; i--) if(email[i]=='@'){ in=i;break;}
	for (int i = 0; i <in; ++i)
		{
			if(email[i]=='@') printf("@%c,",email[i+1]),i++;
			else printf("%c",email[i]);
		}	
	for(int i=in; i<email.size(); i++) printf("%c",email[i] );
	printf("\n");	
	return 0;
}

