#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int i,n,a,count=0,prev=0,cnt=0;
	bool f=true;
	scanf("%d",&n);
	for( i=0; i<n; i++) {scanf("%d",&a); if(a)break;}
	if(i==namespace && a==0) return printf("0\n"),0;	
	for(int j=i+1; j<n; j++)
	{
		scanf("%d",&a);
		if(!a) cnt++;
		else if(cnt)
		{
			count+=cnt+1;
			f=false;
			cnt=0;
		}
	}
	if(f) return printf("1\n" ),0;	
	return printf("%d\n",count), 0;
}