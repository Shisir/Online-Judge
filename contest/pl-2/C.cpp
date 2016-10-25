#include <bits/stdc++.h>

using namespace std;
char line[100001],ch[2];
int n,ans;
int main() 
{		
	scanf("%s",line);
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%s",ch);
		
		for(int j=0;line[j]; j++) 
		{
			int fst=0,scnd=0;
			while(line[j]==ch[0] || line[j]==ch[1])	{line[j]==ch[0]?fst++:scnd++;j++;}
			ans+=min(fst,scnd);
		}
		
	}
	return printf("%d\n",ans), 0;
}