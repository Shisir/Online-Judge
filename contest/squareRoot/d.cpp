#include <bits/stdc++.h>

using namespace std;
int arr[200001],n,q,a,b,s;

struct range
{
	int l,r,p;
};

bool cmp(range A, range B)
{
	if(A.l/s!=B.l/s) return A.l<B.l;
	return A.r<B.r;
}
int add()
{

}
int sub()
{

}
int main(void)
{
	vector<range> v;
	range val;
	scanf("%d%d",&n,&q);
	s=sqrt(n);
	for(int i=1; i<=n; i++) scanf("%d",&arr[i]);
	for(int i=0; i<q; i++) 
	{
		scanf("%d%d",&a,&b);
		val.l=a;
		val.r=b;
		val.p=i;
	}	
	sort(v.begin(),v.end(),cmp);

	for(int i=0; i<q; i++)
	{
		int powerSum=1,L=1,R=1;
		

	}

	return 0;
} 