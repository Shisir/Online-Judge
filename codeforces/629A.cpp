#include <bits/stdc++.h>

using namespace std;
long long combination(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	if(n==3) return 3;
	if(n==4) return 6;
	long long res=1;
	for(int i=n-1;i<=n; i++)res*=i;
	return res/2;	
}
int main() 
{	

	int n;
	string line[101];
	long long ans=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)cin>>line[i];

	for(int i=0; i<n; i++)
	{
		int cnt=0,cnt1=0;
		for(int j=0; j<n; j++){if(line[i][j]=='C')cnt++;if(line[j][i]=='C')cnt1++;}
		ans+=combination(cnt)+combination(cnt1);
	}
	printf("%lld\n",ans );
		
	return 0;
}