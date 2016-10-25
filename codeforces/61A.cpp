#include <bits/stdc++.h>

using namespace std;
char a[101],b[101];
int main() 
{	
	scanf("%s\n%s",a,b);
	for(int i=0;a[i]; i++) a[i]!=b[i]?printf("1"):printf("0");
	return 0;
}