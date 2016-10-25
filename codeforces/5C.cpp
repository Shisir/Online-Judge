#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string line;
	cin>>line;
	int len,max=0,count=0,leftCount=0,maxCount=1;
	len=line.length();

	for(int i=0;i<len; i++)
	{
		if(line[i]=='('){ leftCount++;}
		else if(line[i]==')') 
		{
			if(leftCount==0)
			{
				if(count>max) max=count;
				else if(count==max) maxCount++;
				count=0;
				continue;
			}
			else 
			{
				count++;
				leftCount--;
			} 
			if(count>max) {max=count;maxCount=1;}
			else if(count==max) maxCount++;
		}	
	}
	if(max==0) printf("0 -1\n");
	else printf("%d %d\n",max*2,maxCount);


	return 0;
}
