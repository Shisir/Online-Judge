#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,a,b;
	map<string,string>mp;
	string p,q,r,s;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		cin>>p>>q>>r>>s>>a>>b;
		mp[q]=p,mp[s]=r;
		if((a+b)&1) cout<<mp["IMPAR"]<<endl;
		else cout<<mp["PAR"]<<endl;	
	}
	return 0;
}