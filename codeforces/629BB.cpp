#include <bits/stdc++.h>

using namespace std;
int n,M[367],F[367],st,ed,maxi=-1;
char type;
int main() 
{	
	scanf("%d\n",&n);

	for(int i=0; i<n; i++) 
	{
		scanf("%c %d %d\n",&type,&st,&ed);
		if(type=='M') for(int j=st; j<=ed; j++) M[j]++;
		else  for(int j=st; j<=ed; j++) F[j]++;
	}
	for(int i=0; i<367; i++) maxi=max(maxi,min(M[i],F[i]));
	return printf("%d\n",maxi<<1), 0;
}