#include <bits/stdc++.h>

using namespace std;

struct point
{
	int s,l;	
};
bool arrsort(point a, point b)
{
	return a.l<b.l;
}

int main() 
{
	int test,count=1;
	vector<point> v;
	scanf("%d",&test);
	int a,b;
	point p;
	for(int t=0;t<test; t++)
	{
		scanf("%d%d",&a,&b);
		p.s=a;
		p.l=b;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), arrsort);
	int save=v[0].l;
	for (int i = 1; i < test; ++i)
	{
		if(v[i].s>save)
		{
			count++;
			save=v[i].l;
		}
	}
	printf("%d\n",count );

	return 0;
}

