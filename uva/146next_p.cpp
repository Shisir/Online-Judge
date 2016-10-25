#include <bits/stdc++.h>

using namespace std;
string line;
char ch[51],len;

int main() 
{	
	while(getline(cin,line) && line!="#")
	{
		bool f=false;
		len=line.length();
		for(int i=0; i<len; i++) ch[i]=line[i];
		
		while(next_permutation(ch,ch+len))
		{
			for(int i=0;i<len; i++) printf("%c",ch[i] );
				printf("\n");
				f=true;break;
		}	
		if(!f) printf("No Successor\n");
	}
	return 0;
}