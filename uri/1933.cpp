#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b) swap(a,b);
	return printf("%d\n",a), 0;
}