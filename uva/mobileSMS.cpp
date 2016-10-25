#include <bits/stdc++.h>

using namespace std;
string line[]={" ",".,?\"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int ch[101],rep[101];
int main() 
{	
	int test,len;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&len);
		for(int i=0; i<len; i++) scanf("%d",&ch[i]);
		for(int i=0; i<len; i++) scanf("%d",&rep[i]);
		for(int i=0; i<len; i++) printf("%c",line[ch[i]][(rep[i]-1)%4]);
		printf("\n");

	}
	return 0;
}
