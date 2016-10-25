#include <bits/stdc++.h>

using namespace std;
struct node
{
	int gold,silver,bronze;
};
int main() 
{
	node nd;
	map<string,node>mp;
	string line,a,b,c;
	while(getline(cin,line) && line!="")
	{
		getline(cin,a);
		getline(cin,b);
		getline(cin,c);
		mp[a].gold+=1;
		mp[b].silver+=1;
		mp[c].bronze+=1;
	}	

	map<string,node>::iterator it=mp.begin();
	for (it=mp.begin(); it!=mp.end(); ++it)
	{
		cout<<it->first << " " << it->second.gold<< " "  <<it->second.silver<< " "  <<it->second.bronze <<endl;
	}

	return 0;
}

