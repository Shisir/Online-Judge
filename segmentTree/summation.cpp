#include <bits/stdc++.h>
/*
	calculate size of segtree[] 
	segtree[2*pow(2, ceil(log(number)/log(2)))]
*/
using namespace std;
const long long maxi=262144;

struct node
{
	long long sum;
	long long lazy;

}segmentTree[maxi];

void build(int n)
{
	for (int i = 1; i < n; ++i)
	{
		segmentTree[i].sum=0;
		segmentTree[i].lazy=0;
	}
}
void update_node(int idx, int st, int ed, int value)
{
	segmentTree[idx].sum+=value*(ed-st+1);
	segmentTree[idx].lazy+=value;
}

void update_lazy(int idx, int st, int ed)
{
	int mid=(st+ed)>>1, left=idx<<1, right=left+1;
	update_node(left, st, mid, segmentTree[idx].lazy);
	update_node(right, mid+1, ed, segmentTree[idx].lazy);
	segmentTree[idx].lazy=0;
}

long long merge(long long a, long long b)
{
	return a+b;
}

void update(int idx, int st, int ed, int i, int j, int value)
{
	if(i>ed || j<st) return;
	if(i<=st && j>=ed)
	{
		update_node(idx, st, ed, value);
		return;
	}
	int mid=(st+ed)>>1,left=idx<<1,right=left+1;
	if(segmentTree[idx].lazy) update_lazy( idx, st, ed );
	update(left, st, mid, i, j, value);
	update(right, mid+1, ed, i, j, value);

	segmentTree[idx].sum=merge(segmentTree[left].sum, segmentTree[right].sum);
}

long long query(int idx, int st, int ed, int i, int j)
{
	if(i>ed || j<st) return 0;
	if(i<=st && j>=ed)
	{
		if(segmentTree[idx].lazy) update_lazy(idx, st, ed);
		return segmentTree[idx].sum;
	} 
	int mid=(st+ed) >> 1, left=idx<<1, right=left+1;
	if(segmentTree[idx].lazy) update_lazy(idx, st, ed);  
	return merge( query(left, st, mid, i, j) , query(right, mid+1, ed, i, j) );
}

int main(void)
{
	int Test,number,Query,minRange,maxRange,type;
	long long value;

	scanf("%d",&Test);
	Test++;

	for(int t=1; t<Test; t++)
	{
		printf("Case %d:\n",t);
		scanf("%d%d",&number,&Query);

		build(maxi);
		for(int i=0; i<Query; i++)
		{
			scanf("%d%d%d",&type,&minRange,&maxRange);

			if(type) printf("%lld\n",query(1,1,number,minRange+1,maxRange+1));
			else 
			{
				scanf("%lld",&value);
				update(1,1,number,minRange+1,maxRange+1,value);
			}
		}
	}

	return 0;
}