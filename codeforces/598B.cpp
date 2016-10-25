#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string line;
	cin>>line;
	int m,l,r,k;
	cin>>m;
	
	for (int i = 0; i < m; ++i)
	{
		cin>>l>>r>>k;
		l--,r--;
		k=k%(r-l+1);
		if(!k) ;
		else rotate(line.begin()+l,line.begin()+r-k+1,line.begin()+r+1);
	}	
	cout<< line <<'\n';
	
	return 0;
}