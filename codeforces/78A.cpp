#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int count=0;
	string line;
	for(int i=0; i<3; i++,count=0)
	{
		getline(cin,line);
		for(int j=0; line[j]; j++) if(line[j]=='a'||line[j]=='e'||line[j]=='i'||line[j]=='o'||line[j]=='u') count++;
		if(i==0)if(count!=5) return printf("NO\n"),0;
		if(i==1)if(count!=7) return printf("NO\n"),0;
		if(i==2)if(count!=5) return printf("NO\n"),0;	
	}
	return printf("YES\n"),0;
}