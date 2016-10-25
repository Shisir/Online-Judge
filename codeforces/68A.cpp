#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int p1,p2,p3,p4,a,b,count=0;
	scanf("%d%d%d%d%d%d",&p1,&p2,&p3,&p4,&a,&b);
	for(int i=a; i<=b; i++) if(((((i%p1)%p2)%p3)%p4)==i) count++;
	return printf("%d\n",count),0;
}