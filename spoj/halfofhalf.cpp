#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		string line;
		cin>>line;
		int i=0;
		while(i<(line.length()/2))
		{
			cout<<line[i];
			i+=2;
		}
		cout<<'\n';	
	}
	return 0;
}