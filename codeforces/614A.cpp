#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	long long l,r,k,ld;
	bool f=true;
	scanf("%I64d%I64d%I64d",&l,&r,&k);
	for(long long i=0; i<67; i++)
	{
		ld=(long long)pow(k,i);
		if(ld>=l &&ld<=r){
			printf("%I64d ",ld);
			f=false;
		}
	}	
		
	if(f) printf("-1\n");
	return 0;
}