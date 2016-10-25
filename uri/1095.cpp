#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	for (int i = 1,j=60; ; i+=3,j-=5)
	{
		printf("I=%d J=%d\n",i,j);
		if(!j) break;
	}
	return 0;
}

