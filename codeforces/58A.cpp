#include <bits/stdc++.h>

using namespace std;
char ch,d[6]="hello";
int main() 
{	
	int count=0;
	
	while(scanf("%c",&ch) && ch!='\n')
	{
		if(d[count	]==ch)count++;
		if(count==5) return printf("YES\n"),0;
	}
	return printf("NO\n"), 0;
}