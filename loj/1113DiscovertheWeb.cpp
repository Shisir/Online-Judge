#include <bits/stdc++.h>

using namespace std;
int test;
string operation,url;
int main() 
{	
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		stack<string>backward,forward;
		cout<<"Case "<<t<<":\n";
		backward.push("http://www.lightoj.com/");
		while(cin>>operation && operation!="QUIT")
		{
			if(operation=="VISIT")
			{
				cin>>url;
				cout<<url<<'\n';
				backward.push(url);
				while(!forward.empty())forward.pop();
			}
			else if(operation=="BACK")
			{
				if(backward.size()==1) cout<<"Ignored\n";
				else
				{
					forward.push(backward.top());
					backward.pop();
					cout<<backward.top()<<'\n';
				}
			}
			else if(operation=="FORWARD")
			{
				if(forward.empty()) cout<<"Ignored\n";
				else
				{
					cout<<forward.top()<<'\n';
					backward.push(forward.top());
					forward.pop();
				}
			}
		}
		
	}
	return 0;
}