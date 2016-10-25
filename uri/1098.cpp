#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int c=0;
	for (double i = 0,j=1; i <=2; i+=.2,j+=.2)
	{
		if(c==0 || c==5 || c==10)printf("I=%.0lf J=%.0lf\nI=%.0lf J=%.0lf\nI=%.0lf J=%.0lf\n",i,j,i,j+1,i,j+2);
		else printf("I=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\nI=%.1lf J=%.1lf\n",i,j,i,j+1,i,j+2);
		c++;
	}
	return 0;
}

