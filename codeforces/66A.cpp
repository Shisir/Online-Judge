#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	long double n;
	cin>>n;
	if(n<128) printf("byte\n");
	else if(n<32768) printf("short\n");
	else if(n<2147483648) printf("int\n");
	else if(n<9223372036854775808) printf("long\n");
	else printf("BigInteger\n");
	return 0;
}