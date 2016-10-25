#include <bits/stdc++.h>

using namespace std;
int n, arr[51],cnt;
int main(void)
{
	while(scanf("%d",&n) && n)
	{
		cnt=0;
		for(int i=0; i<n; i++) scanf("%d",&arr[i]);
		for(int i=0; i<n; i++)
			for(int j=i+1; j<n; j++)
			  if(__gcd(arr[i],arr[j])==1) cnt++;
	
		n=n*(n-1)/2;
		if(cnt==0) printf("No estimate for this data set.\n");
		else printf("%lf\n",sqrt((6.00*n)/cnt));

	}

	return 0;
}