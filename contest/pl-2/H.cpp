#include <bits/stdc++.h>

using namespace std;

int t,test,arr[100001],block[450],n,m,s,L,R,val,cnt=0,nxtblck,lstblck,operation;
bool prm[1000001];

inline void update(int l, int r)
{
	scanf("%d",&val);
	if(l/s==r/s)
	{
		for(int i=l; i<=r; i++)
		{
			if(prm[arr[i]])
			{
				if(prm[val]) ;
				else block[i/s]--;
			}
			arr[i]=val;
		}
	}
	else
	{
		nxtblck=(l/s+1)*s;
		lstblck=(r/s)*s;
		for(int i=l;i<nxtblck; i++)
		{
			if(prm[arr[i]])
			{
				if(prm[val]) ;
				else block[i/s]--;
			}
			arr[i]=val;
		}
		for(int i=nxtblck; i<lstblck; i=i+s)
		{
			if(prm[val]) block[i/s]=s;
			else block[i/s]=0;
		}
		for(int i=lstblck; i<=r; i++)
		{
			if(prm[arr[i]])
			{
				if(prm[val]) ;
				else block[i/s]--;
			}
			arr[i]=val;
		}	
	}
}

inline void query(int l, int r)
{
	if(l/s==r/s)
	{
		for(int i=l; i<=r; i++)	cnt+=prm[arr[i]];
	}
	else
	{
		nxtblck=(l/s+1)*s;
		lstblck=(r/s)*s;
		for(int i=l;i<nxtblck; i++) cnt+=prm[arr[i]];
		for(int i=nxtblck; i<lstblck; i=i+s)
		{
			cnt+=s;
		}
		for(int i=lstblck; i<=r; i++) cnt+=prm[arr[i]];
	}
	printf("%d\n",cnt);

}
bool isPrime(int num) 
{
    if(num < 2)  return false;
    else if(num == 2)  return true;
    else if(num % 2 == 0) return false;
    for(int i = 3, max = sqrt(num); i <=max; i += 2) if(num % i == 0) return false;
    return true;
}
int main() 
{	
	prm[2]=2;
	for(int i=3; i<1000001; i+=2) if(isPrime(i)) prm[i]=1;
	scanf("%d",&test);
	test++;
	for( t=1;t<test; t++)
	{
		scanf("%d%d",&n,&m);
		printf("Case %d:\n",t);
		s=sqrt(n);
		for (int i = 0; i <n; ++i) 
		{
			scanf("%d",&arr[i]);
			if(prm[arr[i]]) block[i/s]++;
		}
		for (int i = 0; i <m; ++i)
		{
			cnt=0;
			scanf("%d %d %d",&operation,&L,&R);
			if(operation==0) update(--L,--R);
			else query(--L,--R);
		}
		
	}
	

	return 0;
}