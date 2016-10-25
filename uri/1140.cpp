#include <bits/stdc++.h>

using namespace std;
int main() 
{	
	string line,temp;
	char ch;
	while(getline(cin,line) && line!="*")
	{
		if(line[0]>='A' && line[0]<='Z') line[0]+=32;
		ch=line[0];
		bool f=true;
		istringstream iss(line);
		while(iss>>temp)
		{
			if(temp[0]>='A' && temp[0]<='Z') temp[0]+=32;
			if(ch!=temp[0])
			{
				printf("N\n");
				f=false;
				break;
			}
		}
		if(f)printf("Y\n");
	}
	return 0;
}