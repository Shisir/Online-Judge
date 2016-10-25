#include <bits/stdc++.h>

using namespace std;
string line,sub;
int main(void)
{
	for(int i=0; i<24; i++)
	{
		cin>>line>>sub;
		bool f=false;
		for(int i=0; i<line.length()-sub.length(); i++)
		{
			string su=line.substr(i,sub.length());
			if(su==sub) {printf("1\n"),f=true;break;}
		}
		if(!f) printf("0\n");
	}
	return 0;
}