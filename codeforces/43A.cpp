#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,max=-1;
	string team,answer;
	scanf("%d",&n);
	map<string,int>mp;
	for(int i=0; i<n; i++)
	{
		cin>>team;
		mp[team]++;
	}
	for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++) if(max<it->second) max=it->second,answer=it->first;
	return cout<<answer<<endl,0;
}