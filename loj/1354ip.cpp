#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(char b[])
{
	int result=0;

	for(int i=0; i<8; i++)	result=result*2+(b[i]-48);

	return result;
}

int main(void)
{
	int test,da,db,dc,dd;
	char line[40];
	char binIp[4][10]; 
	scanf("%d",&test);

	for(int i=1; i<=test; i++)
	{
		scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
		scanf("%s",line);
		int j=0,k=0;
		for(int lo=0;line[lo]; lo++) 
		{
			if(line[lo]=='.')
			{
				binIp[j][k]='\0';
				j++;
				k=0;
			}
			else binIp[j][k++]=line[lo];
		}
		binIp[j][k]='\0';
		if(binaryToDecimal(binIp[0])==da && binaryToDecimal(binIp[1])==db && binaryToDecimal(binIp[2])==dc && binaryToDecimal(binIp[3])==dd) printf("Case %d: Yes\n",i);
		else printf("Case %d: No\n",i);
	}			


	return 0;
}
