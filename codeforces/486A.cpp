#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long n,odd,even;
	scanf("%I64d",&n);
	odd=even=n/2;
	if(n&1) odd++;
	printf("%I64d\n",even*(even+1)-odd*odd);
	return 0;
}