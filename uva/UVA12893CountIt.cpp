#include <bits/stdc++.h>

using namespace std;
long long t,n;
int main() 
{	
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<__builtin_popcountll(n)<<endl;
	}
	return 0;
}