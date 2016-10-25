#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{	
	int test,p,l,q;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		vector<int> answer;
		sff(p,l);
		q=p-l;
		if(q>l)
		{
			int loop=sqrt(q),lo;
			for(int i=1; i<=loop; i++)
			{
				if(q%i==0)
				{
					answer.push_back(i);
					if(q/i!=i)answer.push_back(q/i);
				}
			}

			sort(answer.begin(), answer.end());
			lo=answer.size();
			printf("Case %d:",t);
			for(int i=0; i<lo; i++) 
			{
				if(answer[i]>l) printf(" %d",answer[i]);
			}
			printf("\n");
		}
		else printf("Case %d: impossible\n",t);
	}
	

	return 0;
}

