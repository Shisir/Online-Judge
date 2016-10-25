#include <bits/stdc++.h>

using namespace std;

int n,ans=0;
vector<int>v;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	scanf("%d",&n);
	string name;
	cin>>name;
	name+='W';

	for (int i = 0; i <name.length(); ++i)
	{
		int cnt=0;
		for(int j=i; j<name.length(); j++)
		{
			if(name[j]=='B')cnt++;
			else {
				i=j;
				break;
			}
		}
		if(cnt!=0){
			ans++;
			v.push_back(cnt);
		}
	}		
	printf("%d\n",ans);
	for (int i = 0; i <ans; ++i)
	{
		printf("%d ",v[i] );
	}
	return 0;
}
