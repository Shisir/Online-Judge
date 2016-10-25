#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	string a,b,line,c="";
	cin>>line;
	int l=0;
	for (int i = 0; i <line.length(); ++i)
	{
		if(line[i]==','){
			l=i;
			break;
		}
	}
	a=line.substr(0,l);
	b=line.substr(l+1,line.length());
	//cout<<a << " "<<b;
	int mini=min(a.length(),b.length());
	int maxi=max(a.length(),b.length());
	int mina=mini,maxb=maxi;
	for (int i = 0; i <mini; ++i)
	{
		mina--,maxb--;
		cout<<c<<endl;
		if(a.length()<b.length()) c+=a[mina]+b[maxb];
		else c+=a[maxb]-'0'+b[mina]-'0';
	}
	cout<<c<<endl;

	return 0;
}