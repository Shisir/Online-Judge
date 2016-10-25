#include <bits/stdc++.h>

using namespace std;
set<int>save;
struct range
{
	int start,end;
};
int main() 
{	
	int n,a,count=0,first=1;
	vector<range>vec;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&a);
		if(save.find(a)==save.end()) save.insert(a);
		else 
		{
			count++;
			range r;
			r.start=first,r.end=i;
			vec.push_back(r);
			first=i+1;
			save.clear();
		}
	}

	if(count==0) printf("-1\n");
	else 
	{
		vec[vec.size()-1].end=n;
		printf("%d\n",count);
		for(int i=0; i<count; i++) printf("%d %d\n",vec[i].start,vec[i].end);
	}

	return 0;
}