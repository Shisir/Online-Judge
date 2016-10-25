#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	char ch[20],ch1[20],ch2[20];
	scanf("%s%s%s",ch,ch1,ch2);

	if(ch[0]=='v')
	{
		if(ch1[0]=='a')
		{
			if(ch2[0]=='c') printf("aguia\n");
			else printf("pomba\n");
		}
		else
		{
			if(ch2[0]=='o') printf("homem\n");
			else printf("vaca\n");
		}
	}
	else
	{
		if(ch1[0]=='i')
		{
			if(ch2[2]=='m') printf("pulga\n");
			else printf("lagarta\n");
		}
		else
		{
			if(ch2[0]=='h') printf("sanguessuga\n");
			else printf("minhoca\n");
		}

	}

	return 0;
}

