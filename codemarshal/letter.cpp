#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int test,loop;
	string line,hudai;
	cin>>test;
	getline(cin,hudai);

	for (int i = 1; i <= test; ++i)
	{
		getline(cin,line);
		loop=line.length();

		for(int j=0; j<loop; j++) if(line[j]>=97 && line[j]<=122 ) line[j]-=32;
		cout <<"Case " << i << ": " <<line << '\n';	
	}

	return 0;
}