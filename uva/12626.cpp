#include <bits/stdc++.h>

using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	string line;
	getline(cin,line);
	for (int i = 0; i < n; ++i)
	{
		getline(cin,line);
		int m=0,a=0,r=0,g=0,I=0,t=0;
		for(int j=0,len=line.length(); j<len; j++)
		{
			if(line[j]=='M')m++;
			else if(line[j]=='A')a++;
			else if(line[j]=='R')r++;
			else if(line[j]=='G')g++;
			else if(line[j]=='I')I++;
			else if(line[j]=='T')t++;
		}
		a/=3,r/=2,
		printf("%d\n",min(min(I,min(t,r)),min(g,min(a,m))));
	}	
	return 0;
}