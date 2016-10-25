#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	string line,temp;
	char ch=';';

	while(getline(cin,line) && line!="")
	{
		int count=0;
		istringstream iss(line);
		bool f=true;
		while(iss>>temp)
		{
			if(temp[0]>='A' && temp[0]<='Z') temp[0]=temp[0]+32;
			
			if(temp[0]==ch)
			{
				if(f)
				 {
				 	count++;
				 	f=false;
				 }
			}
			else f=true;
			ch=temp[0];
		}
		printf("%d\n",count);
	}
	
	return 0;
}