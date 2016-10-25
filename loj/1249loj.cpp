#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main(void)
{
	int test;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		int n,length,width,height,res,save,chk=0;
		sf(n);
		map<int,string>mymap;

		for(int i=0; i<n; i++)
		{
			char name[30];
			scanf("%s",name);
			sfff(length,width,height);
			res=length*width*height;
			if (mymap.find(res)!=mymap.end())	save=res;
			else 
				{
					mymap[res]=name;
					chk++;
				}
		}
		
		if(chk==1) printf("Case %d: no thief\n",t);
		else
			{
				mymap.erase(save);
				if(mymap.size()==3)
				{	
					map<int,string>:: iterator it=mymap.begin();
					map<int,string>:: iterator it1=it++;
					map<int,string>:: iterator it2=it++;

					int max=it->first,min=it->first;
					if(max<it1->first) max=it1->first;
					if(max<it2->first) max=it2->first;
					if(min>it1->first) min=it1->first;
					if(min>it2->first) min=it2->first;

					string ans,ans2;
					ans=mymap[max];
					ans2=mymap[min];

					cout<<"Case "<<t << ": " << ans << " took chocolate from "<<ans2 << '\n';
				}
				else
				{
					map<int,string>:: iterator it=mymap.begin();
					map<int,string>:: iterator it1=it++;
					int max=it->first,min=it->first;
					if(max<it1->first) max=it1->first;
					if(min>it1->first) min=it1->first;
					string ans,ans2;
					ans=mymap[max];
					ans2=mymap[min];

					cout<<"Case "<<t << ": " << ans << " took chocolate from "<<ans2 << '\n';
				}
			}
	}

	return 0;
}