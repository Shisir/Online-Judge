#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	vector<string> v;
	map<string,string>mp;
	string line,l2,l3;
	int i=0;
	while(getline(cin,line) && line!="")
	{
		l2=line;
		l3="";
		for (int j = 0; j <line.length(); ++j)	l3+=toupper(line[j]);
		v.push_back(l3);
		mp[l3]=l2;
		i++;
	}
	sort(v.begin(),v.end());
	cout<<mp[v[i-1]]<<endl;
	return 0;
}