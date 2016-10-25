#include <bits/stdc++.h>

using namespace std;

struct point
{
	int a,b;
};
point node;
vector<point>vc;
int n,aa,bb,sumA,sumB,loop,iter,res;
bool cmp(point p1, point p2)
{
	if(p1.b!=p2.b) return p1.b>p2.b;
	return p1.a>p2.a;
}
int main() 
{	
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d%d",&aa,&bb);
		node.a=aa,node.b=bb,sumA+=aa,sumB+=bb;
		vc.push_back(node);
	}
	if(sumB>=n-1) return printf("%d\n",sumA),0;
	sort(vc.begin(), vc.end(),cmp);
	loop=1;
	while(loop)
	{
		loop--;
		loop+=vc[iter].b;
		res+=vc[iter].a;
		iter++;
	}
	printf("%d\n",res);
	return 0;
}