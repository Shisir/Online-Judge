#include <bits/stdc++.h>

using namespace std;
struct point
{
	int start,end;
	char type;
};
vector<point>vc;
point p;
char ch;
int a,b,maxi=-111111,cntm,cntf;
int main() 
{	
	int n;
	scanf("%d\n",&n);
	vc.clear();
	for(int i=0; i<n; i++)
	{
		scanf("%c %d %d\n",&ch,&a,&b);
		p.type=ch,p.start=a,p.end=b;
		vc.push_back(p);
	}
	for(int i=0; i<n; i++)
	{
		cntm=cntf=0;
		for(int j=0; j<n; j++)
		{
			if(vc[j].type=='M')
			{
				if(vc[j].start<=vc[i].end &&vc[j].start>=vc[i].start )cntm++;
			}
			else if(vc[j].type=='F')
			{
				if(vc[j].start<=vc[i].end &&vc[j].start>=vc[i].start )cntf++;
			}
		}
		maxi=max(maxi,min(cntf,cntm));
	}
	printf("%d\n",2*maxi);

	return 0;
}