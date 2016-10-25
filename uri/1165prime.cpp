#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) 
{
    if(num < 2)  return false;
    else if(num == 2)  return true;
    else if(num % 2 == 0) return false;
    for(int i = 3, max = sqrt(num); i <=max; i += 2) if(num % i == 0) return false;
    return true;
}
int main() 
{	
	int n,test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		scanf("%d",&n);
		if(isPrime(n)) printf("%d eh primo\n",n);
		else printf("%d nao eh primo\n",n);
	}
	return 0;
}

