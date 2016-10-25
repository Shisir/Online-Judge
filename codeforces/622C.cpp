#include <bits/stdc++.h>

using namespace std;

int arr[200001],n,m,s,L,R,val,cnt=0,nxtblck,lstblck,pos;
bool block[450][1000001];
bool query(int l, int r,int val)
{
	if(l/s==r/s)
	{
		for(int i=l; i<=r; i++)	if(arr[i]!=val) {pos=i+1;return true;}
	}
	else
	{
		nxtblck=(l/s+1)*s;
		lstblck=(r/s)*s;
		for(int i=l;i<nxtblck; i++) if(arr[i]!=val) {pos=i+1;return true;}
		for(int i=nxtblck; i<lstblck; i=i+s)
		{
			if(block[i/s][val]!=1) {pos=i+1;return true;}
		}
		for(int i=lstblck; i<=r; i++) if(arr[i]!=val) {pos=i+1;return true;}
	}
	return false;
}

int main() 
{	
	int n,m;
	scanf("%d%d",&n,&m);
	s=sqrt(n);
	for (int i = 0; i <n; ++i) 
	{
		scanf("%d",&arr[i]);
		block[i/s][arr[i]]=1;
	}
	for (int i = 0; i <m; ++i)
	{
		cnt=0;
		pos=-1;
		scanf("%d %d %d",&L,&R,&val);
		if(query(--L,--R,val)) printf("%d\n",pos);
		else printf("-1\n");
	}

	return 0;
}