#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main(void)
{
	char startMonth[10],endMonth[10];
	int startDay,startYear,test,endDay,endYear;
	sf(test);
	for(int t=1; t<=test; t++)
	{
		scanf("%s %d, %d\n",startMonth,&startDay,&startYear);
		scanf("%s %d, %d\n",endMonth,&endDay,&endYear);
		int result;
		startYear--;
		result=(endYear/4-endYear/100+endYear/400)-(startYear/4-startYear/100+startYear/400 );
		startYear++;
		if((startYear%400==0 || (startYear%4==0 && startYear%100!=0)))
		{
			if(strcmp(startMonth,"January")!=0 && strcmp(startMonth,"February")!=0 ) result--;

		} 

		if((endYear%400==0 || (endYear%4==0 && endYear%100!=0)))
		{
			if(strcmp(endMonth,"February")==0 ){
				if(endDay<29) result--;
			}
			else if(strcmp(endMonth, "January")==0) result--; 

		}	

		printf("Case %d: %d\n",t,result );
	}
	

	return 0;
}