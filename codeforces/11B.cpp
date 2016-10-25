#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n,increment=0,count=0;
	scanf("%d",&n);
	if(n<0) n*=-1;
	if(n==0){ printf("0\n"); return 0;}
	while(increment<n || (increment-n)%2!=0) increment+=++count;
	printf("%d\n",count);
	return 0;
}

