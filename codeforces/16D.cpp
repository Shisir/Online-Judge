#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n,day=1;
	string hudai;
	scanf("%d",&n);
	char ch[n];
	int hour[n],minute[n];
	getline(cin,hudai);
	for (int i = 0; i < n; ++i)
	{
		scanf("[%d:%d %c",&hour[i],&minute[i],&ch[i]);
		getline(cin,hudai);	
	}
	for (int i = 1; i < n; ++i)
	{
		if(ch[i-1]=='a')
		{
			if(ch[i]=='a')
			{
				
			}
		}
		else
		{

		}

	}	



	return 0;
}

