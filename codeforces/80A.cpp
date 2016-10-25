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
	int a,b;
	scanf("%d%d",&a,&b);
	if(isPrime(b))
	{
		for(int i=a+1; i<=b;i++)
		{
			if(isPrime(i))
			{
				if(i==b) return printf("YES\n"),0;
				return printf("NO\n"),0;
			}
		}
	}
	return printf("NO\n"),0;
}