#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int number,sum=0,n,gc;
	scanf("%d",&number);

	for(int i=2; i<number; i++)
	{
		n=number;
		while(n)
		{
			sum+=n%i;
			n/=i;
		}
	}

    gc=__gcd(sum,number-2);
	printf("%d/%d\n",sum/gc,(number-2)/gc);

	return 0;
}

