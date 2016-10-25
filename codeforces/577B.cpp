#include <bits/stdc++.h>

using namespace std;

int a,n,m,arr[1001],sz;
vector<int>number;

int calc(int mod){if(!arr[mod]) arr[mod]=1,number.push_back(mod);}

int main() 
{	
	scanf("%d%d",&n,&m);
	while(n--)
	{
		scanf("%d",&a);
		for(int i=0,sz=number.size(); i<sz; i++) calc((a+number[i])%m);
		calc(a%m);
		if(arr[0]) return printf("YES\n"),0;
	}
	return printf("NO\n"),0;
}