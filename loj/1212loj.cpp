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
		int n,m,value,count=0;
		vector <int> number;
		char operation[30];
		sff(n,m);
		printf("Case %d:\n",t);
		for(int i=0; i<m; i++)
		{
			scanf("%s",operation);
			int prt=number.size();
			if(strcmp(operation,"pushLeft")==0)
			{
				sf(value);
				if(count==n) printf("The queue is full\n");
				else
					{
						printf("Pushed in left: %d\n",value);
						number.insert(number.begin(),value);
						count++;
					}		
			}

			else if(strcmp(operation,"pushRight")==0)
			{
				sf(value);
				if(count==n) printf("The queue is full\n");
				else
					{
						printf("Pushed in right: %d\n",value);
						number.insert(number.end(),value);
						count++;
					}
				
			}
			else if(strcmp(operation,"popLeft")==0)
			{
				if(count==0) printf("The queue is empty\n");
				else
				{
					printf("Popped from left: %d\n",number[0]);	
					number.erase(number.begin());
					count--;
				}
				
			}

			else if(strcmp(operation,"popRight")==0)
			{
				if(count==0) printf("The queue is empty\n");
				else
				{
					printf("Popped from right: %d\n",number[count-1]);
					number.erase(number.begin()+count-1);
					count--;
				}
				
			}
		}


	}


	return 0;
}
