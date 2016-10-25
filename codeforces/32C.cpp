#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	long long a,b,c;
	scanf("%I64d%I64d%I64d",&a,&b,&c);a--,b--;
	printf("%I64d\n",(a%c+1)*(a/c+1)*(b%c+1)*(b/c+1));
	return 0;
}

