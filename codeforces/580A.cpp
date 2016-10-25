#include <bits/stdc++.h>

using namespace std;
int arr[100001];
int main(void)
{
	int n,cnt=1,maxi=-1;
	scanf("%d",&n);
	for (int i = 0; i <n; ++i) scanf("%d",&arr[i]);
	for (int i = 1; i <n; ++i)if(arr[i-1]>arr[i]) maxi=max(maxi,cnt),cnt=1;else cnt++;
	return printf("%d\n",max(maxi,cnt)), 0;
}