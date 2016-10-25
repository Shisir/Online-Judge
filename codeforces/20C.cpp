#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int g[100000];
vector <vector<pair<int,int> > > v(100000,vector<pair<int,int> >());
priority_queue <pair<int,pair<int,int> > > q;
vector <int> p(100000,-1);


void f(int k)
{
	if(p[k]!=k)
	{
		f(p[k]);
	}
	cout<<k+1<<" ";
}
int main()
{
	int n,m,i;
	int a,b,c,k;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
	    cin>>a>>b>>c;
		v[a-1].push_back(make_pair(b-1,-c));
		v[b-1].push_back(make_pair(a-1,-c));
	}
	q.push(make_pair(0,make_pair(0,0)));
	
	while(!q.empty())
	{
		a=q.top().first;
		k=q.top().second.first;
		//cout<<a<< " " << k << " " << q.top().second.second <<endl;
		if(!g[k])
		{

			g[k]=1;
			p[k]=q.top().second.second;
			q.pop();
			for(unsigned int i=0;i<v[k].size();i++)
			{
				q.push(make_pair(a+v[k][i].second,make_pair(v[k][i].first,k)));
			}
		}
		else
		{
			q.pop();
		}
	}

	if(p[n-1]==-1)
	{
		cout<<-1;
		return 0;
	}
	f(n-1);
}