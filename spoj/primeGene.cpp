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
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++)	if(isPrime(i)) printf("%d\n",i);
		if(t!=test-1)printf("\n");
	}
	return 0;
}