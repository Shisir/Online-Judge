#include <bits/stdc++.h>

using namespace std;
int mat[101][101],sum[101][101],dp[101],n,maxi=-(1<<30);
int main() 
{	
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			{
				scanf("%d",&mat[i][j]);
				sum[i][j+1]=sum[i][j]+mat[i][j];
			}

	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			for(int k=0; k<n; k++)
				dp[k+1]=max(sum[k][j]-sum[k][i]+dp[k],sum[k][j]-sum[k][i]),
				maxi=max(maxi,dp[k+1]);
	printf("%d\n",maxi);
		
	return 0;
}