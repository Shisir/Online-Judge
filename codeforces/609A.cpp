#include <bits/stdc++.h>

using namespace std;
int arr[102];
int main(void)
{
	int n,m,sum=0,cnt=0;
	scanf("%d%d",&n,&m);
	for (int i = 0; i <n; ++i) scanf("%d",&arr[i]);
	sort(arr,arr+n);
	for(int i=n-1; i>-1; i--)
	{
		sum+=arr[i];
		cnt++;
		if(sum>=m)break;
	}
	printf("%d\n",cnt);
	return 0;
}