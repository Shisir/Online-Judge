#include <bits/stdc++.h>

using namespace std;
long long n;
long long F(long long n, int r)
{
	if(r==0) return 1;
	return F(n-1,r-1)*n/r;
}
int main() 
{	
	cin>>n;
	cout<<F(n,5)+F(n,6)+F(n,7)<<endl;	
	return 0;
}