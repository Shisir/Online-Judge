#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

char binary[102];

int main(void)
{
	int test;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		long long int number,lo=0,count1=0,count2=0,count3=0,sum=0,i;
		scanf("%lld",&number);

		while(number)
		{
			if(number%2==1)
			{
				binary[lo]='1';
				count1++;
			}
			else binary[lo]='0';

			number/=2;
			lo++;
		}
		binary[lo]='\0';

		for( i=0; ; i++)
		{
			if(binary[i]=='1')
			{
				while(binary[i]=='1')
				{
					binary[i]='0';
					i++;
				}
				binary[i]='1';
				break;
			}
		}
		if(lo==i) binary[i+1]='\0';

		for(int i=0; binary[i]!='\0'; i++){ if(binary[i]=='1') count2++; count3++;};
		for(int i=0; i<count1-count2; i++) binary[i]='1'; 

		for(int i=count3-1;i>-1; i--)	sum=sum*2+binary[i]-'0';
		
		printf("Case %d: %lld\n",t,sum);

	}

	return 0;
}