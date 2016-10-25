#include <bits/stdc++.h>

using namespace std;
map<int,int>mymap;

int main(void)
{
	int n,m;
	

	cin>>n>>m;

	for(int i=0; i<m; i++)
	{
		int max=-9999999,cand;
		for(int j=0; j<n; j++)
		{
			int a;
			cin>>a;
			if(max<a)
			{
				cand=j;
				max=a;
			}
		}
		mymap[cand]++;
	}
	long int result=0,maxvote=-1;

	map<int, int> :: iterator it;
	for(it = mymap.begin(); it != mymap.end(); it++) {
		if(it->second > maxvote) {
			result = it->first;
			maxvote = it->second;
		}
	}

	cout<<result+1 <<endl;

	return 0;
}
