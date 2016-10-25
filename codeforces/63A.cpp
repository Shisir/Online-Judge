#include <bits/stdc++.h>

using namespace std;
map<string,string>mp;
int main() 
{	
	int n;string a,b;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a>>b;
		if(b=="child")b="woman";
		mp[b]+=a+'\n';
	}
	return cout<<mp["rat"]<<mp["woman"]<<mp["man"]<<mp["captain"],0;
}