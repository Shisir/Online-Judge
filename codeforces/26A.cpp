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
	int n,count=0;
	scanf("%d",&n);

	for (int i = 1; i <=n ; ++i)
	{
		set<int>saves;
		saves.clear();
		for (int j = 1,square_root =sqrt(i); j <= square_root; j++)
		{ 
			if (i % j == 0)
			{
		    	if(isPrime(j))saves.insert(j);
				if(isPrime(i/j))saves.insert(i/j);
			}
		}
		if(saves.size()==2) count++;
	}
	printf("%d\n",count);
	return 0;
}

