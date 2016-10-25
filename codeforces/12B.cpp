#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{	
	char a[10],b[10];
	int an[10],bn[10],j=0,k=0;
	scanf("%s%s",a,b);
	int loop=strlen(a),loop2=strlen(b);
	if(b[0]=='0' || loop!=loop2)
	{
		printf("WRONG_ANSWER\n");
		return 0;
	}
	
	for (int i = 0;i<loop; i++)
	{
		if(a[i]!='0'){ an[j]=a[i]-'0'; j++;}
		if(b[i]!='0'){ bn[k]=b[i]-'0'; k++;}
		
	}
	sort(an,an+j);
	bool f=true;
	for(int i=0; i<j; i++)
	{
		if(an[i]!=bn[i])
		{
			f=false;
			break;
		}
	}
	if(f) printf("OK\n");
	else printf("WRONG_ANSWER\n");
	return 0;
}

