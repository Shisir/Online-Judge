#include <bits/stdc++.h>

using namespace std;
int L[100001],R[100001],S[100001];
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		memset(L,0,sizeof L);
		memset(R,0,sizeof R);
		memset(S,0,sizeof S);
		int l,r,s,temp,have=0,no=0;
		scanf("%d%d%d",&l,&r,&s);
		for(int i=0; i<l; i++){scanf("%d",&temp);L[temp]=1;}
		for(int i=0; i<r; i++){scanf("%d",&temp);R[temp]=1;}
		for(int i=0; i<s; i++){scanf("%d",&temp);S[temp]=1;}
		printf("Case #%d:\n",t);

		for(int i=0; i<100001; i++)
		{
			if(L[i]==1 && R[i]==0 && S[i]==0) have++;
			else if(L[i]==0 && R[i]==1 && S[i]==1) no++;
		}
		printf("%d %d\n",have,no);
		have=no=0;
		for(int i=0; i<100001; i++)
		{
			if(R[i]==1 && L[i]==0 && S[i]==0) have++;
			else if(R[i]==0 && L[i]==1 && S[i]==1) no++;
		}	
		printf("%d %d\n",have,no);
		have=no=0;
		for(int i=0; i<100001; i++)
		{
			if(S[i]==1 && L[i]==0 && R[i]==0) have++;
			else if(S[i]==0 && L[i]==1 && R[i]==1) no++;
		}
		printf("%d %d\n",have,no);
	}
	return 0;
}