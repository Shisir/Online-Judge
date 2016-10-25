#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	return printf("%d\n",max(abs(a-c),abs(b-d))),0;	
}