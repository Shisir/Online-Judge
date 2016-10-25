#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test,a;
	string n;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		cin>>n>>a;
		if(n=="Thor") printf("Y\n");
		else printf("N\n");
	}
	return 0;
}