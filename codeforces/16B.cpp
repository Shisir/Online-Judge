#include <bits/stdc++.h>

using namespace std;
struct point
{
	int a,b;
};

bool arrsort(point A, point B)
{
	return A.b>B.b;
}

int main() 
{
	int n,m,res=0,j=0,minus;
	scanf("%d%d",&n,&m);
	vector<point> v;

	for(int i=0; i<m; i++)
	{
		point p;
		scanf("%d%d",&p.a,&p.b);
		v.push_back(p);
	}
	sort(v.begin(), v.end(), arrsort);
	while(n)
	{
		if(j==m) break;
		minus=min(n,v[j].a);
		res+=(minus*v[j].b);
		n-=minus;
		j++;
	}
	printf("%d\n",res);	
	return 0;
}

