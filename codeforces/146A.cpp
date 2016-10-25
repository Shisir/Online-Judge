#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main(void)
{
	int size,len,half,leftresult=0,rightresult=0;
	string number;
	cin>>size>>number;
	len=number.length();

	if(len==size)
	{	
		bool f=true;
		for(int i=0; i<len; i++)
		{
			if(number[i]=='4' || number[i]=='7') continue;
			else
			{
				f=false;
				break;
			}
		}
		if(!f) printf("NO\n");
		else
		{
			half=len/2;

			for(int i=0; i<half; i++)	leftresult+=number[i]-48;
			for(int i=half; i<len; i++) rightresult+=number[i]-48;

			if(leftresult==rightresult) printf("YES\n");	
			else printf("NO\n");

		}
		

	}
	else printf("NO\n");




	return 0;
}
