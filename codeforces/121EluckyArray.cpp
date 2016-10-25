#include <bits/stdc++.h>

using namespace std;

int luckyNumber[30]={4,7,44,47,74,77,444,447,474,477,744,747,774,777,4444,4447,4474,4477,4744,4747,4774,4777,7444,7447,7474,7477,7744,7747,7774,7777};
int arr[100001],block[450][100001],n,m,s,L,R,val,blockadd[450],cnt=0,nxtblck,lstblck;
char operation[6];
bool valid[10001];

inline void update(int l, int r)
{
	scanf("%d",&val);
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

inline void query(int l, int r)
{
	if(l/s==r/s)
	{
		for(int i=l; i<=r; i++)	cnt+=valid[arr[i]+blockadd[i/s]];
	}
	else
	{
		nxtblck=(l/s+1)*s;
		lstblck=(r/s)*s;
		for(int i=l;i<nxtblck; i++) cnt+=valid[arr[i]+blockadd[i/s]];
		for(int i=nxtblck; i<lstblck; i=i+s)
		{
			for(int j=0; j<30; j++)
				if(luckyNumber[j]-blockadd[i/s]>=0) cnt+=block[i/s][luckyNumber[j]-blockadd[i/s]];
		}
		for(int i=lstblck; i<=r; i++) cnt+=valid[arr[i]+blockadd[i/s]];
	}
	printf("%d\n",cnt);

}

int main() 
{	
	int n,m;
	scanf("%d%d",&n,&m);
	s=sqrt(n);
	for(int i=0; i<30; i++) valid[luckyNumber[i]]=1;
	for (int i = 0; i <n; ++i) 
	{
		scanf("%d",&arr[i]);
		block[i/s][arr[i]]++;
	}
	for (int i = 0; i <m; ++i)
	{
		cnt=0;
		scanf("%s %d %d",operation,&L,&R);
		if(strcmp(operation,"add")==0) update(--L,--R);
		else query(--L,--R);
	}

	return 0;
}