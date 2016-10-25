#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b;
	while(1)
	{
		scanf("%d%d",&a,&b);
		if(!a && !b) break;
		else if(a>0 && b>0) printf("primeiro\n");
		else if(a>0 && b<0) printf("quarto\n");
		else if(a<0 && b<0) printf("terceiro\n");
		else printf("segundo\n");


	}
	return 0;
}

