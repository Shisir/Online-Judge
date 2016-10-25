#include <bits/stdc++.h>

using namespace std;
map<char,int>letter;
bool iscapital(char ch) 
{
	return (ch>='A'&&ch<='Z')?true:false;
}
int main(void)
{
	int n,maxi=-1;
	string line;
	scanf("%d",&n);
	getline(cin,line);
	for(int i=0; i<n; i++)
	{
		getline(cin,line);maxi=-1;
		letter.clear();
		for(int j=0,len=line.length(); j<len; j++) 
			if(isalpha(line[j]))
				{ 
					if(iscapital(line[j])) line[j]+=32;
					letter[line[j]]++,maxi=max(maxi,letter[line[j]]);
				}
		for(map<char,int>::iterator it=letter.begin(); it!=letter.end(); it++) if(it->second==maxi) printf("%c",it->first);
		printf("\n");
	}
	return 0;
}