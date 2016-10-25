#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,m,x,low,high;
	string a,hudai;
	cin>>n>>m;
	low=n,high=1;
	for(int i=0; i<m; i++)
	{
		cin>>hudai>>hudai>>a>>hudai>>x;
		(a=="left")?low=min(x-1,low):high=max(x+1,high);
	}
	cout<<(low<high?-1:low-high+1);
	return 0;
}