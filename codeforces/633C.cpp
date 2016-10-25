#include <bits/stdc++.h>

using namespace std;
string line,text,cpy,chk;
map<string,string>mp;
set<string>save;

int main() 
{	
	int n,q;
	cin>>n>>line>>q;
	for(int i=0; i<q; i++)
	{
		cin>>text;
		cpy=text;
		for(int j=0;text[j]; j++ )
		{
			if(text[j]>='A' && text[j]<='Z') text[j]+=32;
		}
		save.insert(text);
		mp[text]=cpy;
	}
	chk="";
	for(int i=0; i<=n; i++)
	{
		if(save.find(chk)!=save.end())
		{
			cout<<mp[chk]<<" ";
			chk=line[i];
		}
		else chk.insert(chk.begin()+0,line[i]);
		//cout<<chk<<endl;
	}

	return 0;
}