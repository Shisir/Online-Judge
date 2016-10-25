#include <bits/stdc++.h>

using namespace std;
char line[202];
int main() 
{	
	scanf("%s",line);
	for(int i=0;line[i]; i++)
	{
		if(line[i]=='.') printf("0");
		else if(line[i]=='-')
		{
			i++;
			if(line[i]=='.')printf("1");
			else printf("2");
		}
	}
	return 0;
}

