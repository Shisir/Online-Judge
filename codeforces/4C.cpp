#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n;
	string name;
	map<string,int>mp;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>name;
		if(mp.find(name)==mp.end())
		{
			cout<<"OK\n";
			mp[name]++;
		}
		else 
			{
				cout<<name<<mp[name]<<'\n';
				mp[name]++;
			}
	}
	return 0;
}

