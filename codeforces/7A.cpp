#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int x=0,y=0;

	for(int i=0; i <8; i++)
	{
		char line[10];
		scanf("%s",line);
		int black=0;
		for(int j=0; j<8; j++)	if(line[j]=='B') black++; 
		if(black==8) x++;
		else y=black;	
	}	
	printf("%d\n",x+y);
	return 0;
}

