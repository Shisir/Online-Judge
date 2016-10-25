#include <bits/stdc++.h>

using namespace std;
stack<char>st;
map<char,char>mp;
int main() 
{	
	int n;
	scanf("%d",&n);
	string line;
	char ch1,ch2;
	cin>>line;
	if(n==1) return cout<<line<<endl,0;
	for(int i=n-1; i>-1; i--)
	{
		st.push(line[i]);
	}
	while(st.size()>1)
	{
		ch1=st.top();
		st.pop();
		ch2=st.top();
		st.pop();
		if(ch1==ch2) {st.push(ch1);mp[ch1]=ch1;}
		else 
		{
			if(ch1=='R' && ch2=='G') st.push('B');
			else if(ch1=='R' && ch2=='B') st.push('G');
			else if(ch1=='G' && ch2=='B') st.push('R');
			else if(ch1=='G' && ch2=='R') st.push('B');
			else if(ch1=='B' && ch2=='R') st.push('G');
			else if(ch1=='B' && ch2=='G') st.push('R');
			mp[st.top()]=st.top();
		}
	}
	for(map<char,char>::iterator it=mp.begin(); it!=mp.end(); it++) cout<<it->second;
	return 0;
}