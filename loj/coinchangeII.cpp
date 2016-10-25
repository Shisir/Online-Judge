#include <bits/stdc++.h>

using namespace std;
int coin[101],dp[101][10001],n,k,test,mod=100000007;
long long changeCoin()
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=k; j++)
		{

			if(j>=coin[i]) dp[i][j]=(dp[i-1][j]+dp[i][j-coin[i]])%mod;
			else dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][k];
}
int main() 
{	
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d%d",&n,&k);
		memset(coin,0,sizeof coin);
		memset(dp,0,sizeof dp);
		for(int i=1; i<=n; i++) scanf("%d",&coin[i]);
		for(int i=1; i<=n; i++) dp[i][0]=1;
		printf("Case %d: %lld\n",t,changeCoin());	
	}
	return 0;
}