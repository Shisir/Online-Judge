#include <bits/stdc++.h>

using namespace std;
int n,num,arr[5];
int main()
{	

	/*freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);*/
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&num);
		if(num%2==0) arr[0]++;
		if(num%3==0) arr[1]++;
		if(num%4==0) arr[2]++;
		if(num%5==0) arr[3]++;
	}
	printf("%d Multiplo(s) de 2\n",arr[0]);
	printf("%d Multiplo(s) de 3\n",arr[1]);
	printf("%d Multiplo(s) de 4\n",arr[2]);
	printf("%d Multiplo(s) de 5\n",arr[3]);
	return 0;
}