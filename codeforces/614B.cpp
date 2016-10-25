#include <bits/stdc++.h>

using namespace std;
string line[100005],save;
int main() 
{	
	int n,len,count=0;
	bool f=true;
	scanf("%d",&n);

	for(int i=0; i<n; i++)
	{
		cin>>line[i];
		if(line[i]=="0") return printf("0\n"),0;
		len=line[i].length();
		count=0;
		if(f)
			{
				for(int j=0; j<len; j++)
				{
					if(line[i][j]>='1') count++;
					if(line[i][j]>'1'){f=false;save=line[i];break;}
					if(count==2) { f=false; save=line[i]; break;}
				}
			}
	}
	if(!f)
	{
		cout<<save;
		for(int i=0; i<n; i++)
		{
			if(line[i]==save) continue;
			else for(int j=1,len=line[i].length(); j<len; j++) printf("0");
		}
	}
	else 
	{
		cout<<line[0];
		for(int i=1; i<n; i++)
		{
			
			len=line[i].length();
			for(int j=1; j<len; j++) printf("0");
		}
	}
	return 0;
}