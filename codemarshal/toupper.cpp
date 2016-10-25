#include <bits/stdc++.h>

using namespace std;
int n;
string line;
int main() 
{	
	scanf("%d",&n);
	getline(cin,line);
	for(int i=1; i<=n; i++)
	{
		getline(cin,line);
		for(int j=0; line[j]; j++)	if(line[j]>='a' && line[j]<='z') line[j]-=32;
		cout<<"Case "<<i<<": "<<line<<endl;
	}
	return 0;
}