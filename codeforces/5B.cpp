#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

struct node
{
	string line;
	int size;
};

int main(void)
{
	vector<node> lines;
	string tmp;
	int i=0,max=0,count=0;
	bool flag=true;

	while(getline(cin,tmp))
	{
		count++;
		int len=tmp.length();
		if(tmp[0]==' ' || tmp[len-1]==' ')break;
		node ab;
		ab.line=tmp;
		ab.size=len;
		//cout << ab.line << " " <<ab.size <<endl;
		lines.push_back(ab);
		if(max<len) max=len;
	}
	for(int i=0; i<max+2; i++) printf("*");
	printf("\n");

	int interval;
	for (int i = 0; i<count; ++i)
	{
		printf("*");
		//interval=(max-lines[i].size)/2;
		
		if(max%2==0)
		{
			if(lines[i].size%2!=0 && flag==true)
			{
				//printf("nazmul\n");
				flag=false;
				interval=(max-lines[i].size)/2;
				for(int j=0; j<interval; j++) printf(" ");
				cout<<lines[i].line ;
				for(int j=0; j<=interval; j++) printf(" ");	
			}
			else if(lines[i].size%2!=0 && flag==false)
			{
				flag=true;
				interval=(max-lines[i].size)/2;
				for(int j=0; j<=interval; j++) printf(" ");
				cout<<lines[i].line ;
				for(int j=0; j<interval; j++) printf(" ");	
			}
			else
			{
				interval=(max-lines[i].size)/2;
				for(int j=0; j<interval; j++) printf(" ");
				cout<<lines[i].line ;
				for(int j=0; j<interval; j++) printf(" ");	
			}

		}
		else
		{//printf("nazmul\n");
			if(lines[i].size==0) for(int j=0; j<max; j++) printf(" ");
			else if(lines[i].size%2==0 && flag==true)
			{
				
				flag=false;
				interval=(max-lines[i].size)/2;
				for(int j=0; j<interval; j++) printf(" ");
				cout<<lines[i].line ;
				for(int j=0; j<=interval; j++) printf(" ");	
			}
			else if(lines[i].size%2==0 && flag==false)
			{
				flag=true;
				interval=(max-lines[i].size)/2;
				for(int j=0; j<=interval; j++) printf(" ");
				cout<<lines[i].line ;
				for(int j=0; j<interval; j++) printf(" ");	
			}
			else
			{
				interval=(max-lines[i].size)/2;
				for(int j=0; j<interval; j++) printf(" ");
				cout<<lines[i].line ;
				for(int j=0; j<interval; j++) printf(" ");	
			}
			
		}


		printf("*\n");

	}
	for(int i=0; i<max+2; i++) printf("*");
	printf("\n");

	return 0;
}