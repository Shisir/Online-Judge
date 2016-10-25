#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		map<string,string>mp;
		string first,second;
		int n;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			cin>>first>>second;
			
			mp[first]=second;
		}
		scanf("%d",&n);
		for (int i = 0; i <n; ++i)
		{
			cin>>first;
			if(mp.find(first)!=mp.end())cout<<mp[first]<<endl;
			else cout<<"Unknown Song\n";
		}
	}
	return 0;
}