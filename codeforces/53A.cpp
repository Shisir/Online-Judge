#include <bits/stdc++.h>

using namespace std;
string l,l2,l1;
int main() 
{	
	int n;
	vector<string>mv;
	cin>>l>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>l2;
		mv.push_back(l2);
	}
	sort(mv.begin(),mv.end());
	bool f;
	for (int i = 0; i <n; ++i)
	{
		f=true;
		l1=mv[i];
		for(int j=0; l[j]; j++)
		{
			if(l1[j]!=l[j]) {f=false;break;}
		}
		if(f) return cout<<l1<<endl,0;
	}

	return cout << l << endl, 0;
}