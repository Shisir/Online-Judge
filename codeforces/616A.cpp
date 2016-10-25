#include <bits/stdc++.h>

using namespace std;
char a[1000003],b[1000003];
int main() 
{	
	int i,j;
	scanf("%s\n%s",a,b);
	for( i=0; a[i]; i++) if(a[i]!='0') break;
	for( j=0; b[j]; j++) if(b[j]!='0') break;
	int la=strlen(a)-i,lb=strlen(b)-j;
	if(la>lb) printf(">\n");
	else if(la<lb) printf("<\n");
	else
	{
		for(int k=0; k<la; k++)
		{
			if(a[i]>b[j]) return printf(">\n"),0;
			else if(a[i]<b[j]) return printf("<\n"),0; 
			i++;j++;
		}
		printf("=\n");
	}
	
	return 0;
}