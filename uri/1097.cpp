#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	for (int i = 1,j=7; i < 10; i+=2,j+=2)
	{
		printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n",i,j,i,j-1,i,j-2);
	}
	return 0;
}

