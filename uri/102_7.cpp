#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	
	scanf("%d",&n);
	string line,line2,a,b="oulupukk";
	getline(cin,line);
	while(getline(cin,line) && line!="")
	{
		istringstream iss(line);
		while(iss>>line2)
		{
			a="";
			if(line2.length()==11)
			{
				if(line2[10]='.')
				{
					for (int i = 1; i < 9; ++i)	a+=line2[i];
					if(a==b)cout<<'J'<<b<<"i." <<'\n';
					continue;	
				}
			}
			else if(line2.length()==10)
			{
				for (int i = 1; i < 9; ++i)
				{
					a+=line2[i];
				}
			}
			if(a==b){cout<<'J'<<b<<'i' << " ";continue;}
			if(line2[line2.length()-1]=='.'){cout <<line2<<endl;continue;}
			cout <<line2<<" ";
		}
	}
	return 0;
}

