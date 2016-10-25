#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string line;
	getline(cin,line);
	int len=line.length();
	bool f=true;
	for (int i = 1; i < len; ++i)
	{
		if(line[i]!='/')
		{
			if(line[i-1]=='/') printf("/%c",line[i]);
			else printf("%c",line[i]);
			f=false;
		} 
	}	
	if(f)printf("/");
	printf("\n");

	return 0;
}

