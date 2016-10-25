#include <bits/stdc++.h>
/*
	calculate size of segtree[] 
	segtree[2*pow(2, ceil(log(number)/log(2)))]
*/
using namespace std;
struct node
{
	long long sum,lazy;
}tree[300000];

int N=1234567;
long long arr[100005];
bool p[1234567];

void seive()
{
	p[0]=p[1]=1;
	for(int i=4; i<N; i+=2) p[i]=1;
	for(int i=3; i*i<N; i+=2)
	{
		if(!p[i])
		{
			for(int j=i*i, k=i<<1; j<N; j+=k) p[j]=1;
		}
	}	
}

void init(int n)
{
	for(int i=1; i<n; i++) 
		tree[i].sum=0,tree[i].lazy=0;
}
long long merge(long long a, long long b)
{
	return a+b;
}

void build(int idx, int s, int e)
{
	if(s==e)
	{
		tree[idx].sum=!p[arr[s]];
		return;
	}
	int l=idx<<1, r=l|1, mid=(s+e)>>1;
	build(l,s,mid);
	build(r,mid+1,e);
	tree[idx].sum=merge(tree[l].sum, tree[r].sum);
}

void update_node(int idx, int s, int e, long long val)
{
	tree[idx].sum=!p[val]*(e-s+1);
	tree[idx].lazy=val;
}

void update_lazy(int idx, int s, int e)
{
	int l=idx<<1, r=l|1, mid=(s+e)>>1;
	update_node(l,s,mid,tree[idx].lazy);
	update_node(r,mid+1,e,tree[idx].lazy);
	tree[idx].lazy=0;
}

void update(int idx, int s, int e, int i, int j, long long val)
{
	if(e<i || s>j) return;
	if(i<=s && e<=j )
	{
		update_node(idx, s, e, val);
		return;
	}
	int l=idx<<1, r=l|1, mid=(s+e)>>1;
	if(tree[idx].lazy) update_lazy(idx, s, e);
	update(l,s,mid,i,j,val);
	update(r,mid+1,e,i,j,val);
	tree[idx].sum=merge(tree[l].sum, tree[r].sum);
}

long long query(int idx, int s, int e, int i, int j)
{
	if(e<i ||s>j) return 0;
	if(i<=s && e<=j ) return tree[idx].sum;
	int l=idx<<1, r=l|1, mid=(s+e)>>1;
	if(tree[idx].lazy) update_lazy(idx, s, e);
	return merge(query(l,s,mid,i,j), query(r,mid+1,e,i,j));
}

int main() 
{	
	int n,q,l,r,T,tt=1,type;
	long long val;
	seive();
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&q);
		init(3*n);
		for(int i=1; i<=n; i++) scanf("%lld",&arr[i]);
		build(1,1,n);
		
		printf("Case %d:\n",tt++ );

		while(q--)
		{
			scanf("%d%d%d",&type,&l,&r);

			if(type) printf("%lld\n",query(1,1,n,l,r));
			else
			{
				scanf("%lld",&val);
				update(1,1,n,l,r,val);
			}
		}	
	}
	return 0;
}