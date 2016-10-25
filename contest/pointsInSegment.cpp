#include <bits/stdc++.h>

using namespace std;

struct Point
{
	char ch;
	int index;
};

bool pointsSort(Point first, Point second)
{
	if(first.index==second.index) return first.ch<second.ch;
	return first.index<second.index;
}

int main(void)
{
	int testCase;
	scanf("%d",&testCase);

	for(int test=1; test<=testCase; test++)
	{
		int n,q;
		scanf("%d%d",&n,&q);
		vector<Point> points;
		map<int, int> mymap;
		Point point;
		int query[q];

		for(int i=0; i<n; i++)
		{
			int first,second;
			scanf("%d%d",&first,&second);
			point.ch='B';
			point.index=first;
			points.push_back(point);
			point.ch='E';
			point.index=second;
			points.push_back(point);
		}

		for(int i=0; i<q; i++)
		{
			int que;
			scanf("%d",&que);
			query[i]=que;
			point.ch='C';
			point.index=que;
			points.push_back(point);
		}

		sort(points.begin(), points.end(), pointsSort);

		int loop=points.size(), count=0;

		for(int i=0; i<loop; i++)
		{
			if(points[i].ch=='B') count++;
			else if(points[i].ch=='E') count--;
			else mymap[points[i].index]=count;
		}

		printf("Case %d:\n",test );
		for(int i=0; i<q; i++)
		{
			printf("%d\n",mymap[query[i]] );
		}

	}

	return 0;
}