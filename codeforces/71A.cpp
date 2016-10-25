#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int test;
	cin>>test;
	for (int i = 0; i < test; ++i)
	{
		string line;
		cin>>line;
		
		int length=line.length();
		if(length >10)cout<< line[0] << length-2 <<line[length-1] << endl; 
		else cout<<line<<endl;
	}
	

	return 0;
}
