#include <bits/stdc++.h>

using namespace std;
string line;
int main() 
{	
	int t=1;
	
	while(getline(cin,line) && line!="#")
	{
		bool f=true;
		int i=0,len=line.length(),up=0,down=0,noChange=0,ambiguous=0;
		for(; i<len; i++)
		{
			if(line[i]=='.') break;
		}
		for(; i<len-1; i++)
		{
			if(f){if(line[i]=='0' && line[i+1]-'0'<5)ambiguous++;else f=false;}
			if(line[i+1]-'0'==0) noChange++;
			else if(line[i+1]-'0'<5)down++;
			else up++;
		}
		if(!up && !down)ambiguous=0; 
		printf("Case %d:\nROUND UP: %d\nROUND DOWN: %d\nNO CHANGE: %d\nAMBIGUOUS: %d\n\n",t,up,down,noChange,0);
		t++;
	}
	return 0;
}