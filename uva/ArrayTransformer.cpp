#include <bits/stdc++.h>

using namespace std;

int arr[300001],block[548][548],n,m,s,L,R,val,cnt=0,nxtblck,lstblck,u;

long long changeValue(int k, int range)
{
	return u*k/(range);
}

int binarySearch()
{

}

inline void update(int l, int r)
{
	if(l/s==r/s)
	{
		for(int i=l; i<=r; i++)
		{
			block[i/s][arr[i]]--;
			arr[i]+=val;
			block[i/s][arr[i]]++;
		}
	}
	else
	{
		nxtblck=(l/s+1)*s;
		lstblck=(r/s)*s;
		for(int i=l;i<nxtblck; i++)
		{
			block[i/s][arr[i]]--;
			arr[i]+=val;
			block[i/s][arr[i]]++;
		}
		for(int i=nxtblck; i<lstblck; i=i+s)
		{
			blockadd[i/s]+=val;
		}
		for(int i=lstblck; i<=r; i++)
		{
			block[i/s][arr[i]]--;
			arr[i]+=val;
			block[i/s][arr[i]]++;
		}	
	}
}


int main() 
{	
	int n,m;
	scanf("%d%d%d",&n,&m,&u);
	s=sqrt(n*30);
	
	for (int i = 0,j=0; i <n; ++i) 
	{
		scanf("%d",&arr[i]);
		block[i/s][j++]=arr[i];
	}
	for (int i = 0; i <m; ++i)
	{
		cnt=0;
		scanf("%d %d %d %d",&L,&R,&v,&p);
		update(--L,--R);
	}

	return 0;
}