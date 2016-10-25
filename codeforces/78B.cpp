#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	char s[]="GBIV";
    int n,i=0;
    scanf("%d",&n);
    printf("ROY");
    while(i++<n-3) putchar(s[i%4]);
	return 0;
}