#include <bits/stdc++.h>

using namespace std;
int prm[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97},arr[100];
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		memset(arr,0,sizeof arr);
		int n,lo;
		scanf("%d",&n);
		for(int i=2; i<=n; i++)
		for(int j=0,temp=i; j<25; j++)
		{
			if(temp%prm[j]==0)	
			{
				arr[prm[j]]++;
				temp/=prm[j];
				j=-1;
			}	
		}
		printf("Case %d: %d = ",t,n);
		for(int i=0; i<25; i++) if(arr[prm[i]]>0) {lo=i+1;printf("%d (%d)",prm[i],arr[prm[i]]);break;}
		for(;lo<25; lo++) if(arr[prm[lo]]>0) printf(" * %d (%d)",prm[lo],arr[prm[lo]]);
		printf("\n");

	}
	return 0;
}