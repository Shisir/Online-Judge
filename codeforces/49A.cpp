#include <bits/stdc++.h>

using namespace std;
char vowel[12]={'A','E','I','O','U','Y','y','a','e','i','o','u'};
int main() 
{	
	string line;
	getline(cin,line);
	for(int i=line.length()-1;i>-1; i--)
	{
		if((line[i]>='A'&&line[i]<='Z')|| (line[i]>='a'&&line[i]<='z'))
		{
			for(int j=0; j<12;j++)
			{
				if(line[i]==vowel[j])
				{
					return printf("YES\n"),0;
				}
			}
			return printf("NO\n"),0;
		}
	}
	return 0;
}