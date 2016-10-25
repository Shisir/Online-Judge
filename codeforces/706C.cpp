#include <bits/stdc++.h>

using namespace std;

int n,a;
vector<int> v;
char c;
int main()
{	
/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
*/
	scanf("%d",&n);

	for (int i = 0; i <n; ++i)
	{
		scanf("\n%c %d",&c,&a);
		
		int maxi=-111111111;
		if(c=='?')
		{
			for (int j = 0,lp=v.size(); j <lp; ++j)
			{
				maxi=max(maxi,a^v[j]);
			}
			printf("%d\n",maxi);
		}
		else if(c=='-') v.erase(remove(v.begin(),v.end(),a),v.end());
		else v.push_back(a);
	}
	
	return 0;
}	