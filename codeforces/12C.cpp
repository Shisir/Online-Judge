#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n,m;
	map<string,int>mp;
	cin>>n>>m;
	int arr[n],ar[m];
	for (int i = 0; i < n; i++) cin>>arr[i];
	sort(arr,arr+n);
	for (int i = 0; i < m; ++i)
	{
		string tmp;
		cin>>tmp;
		mp[tmp]++;
	}
	int j=0,min=0,max=0,lol=0;	
	for(map<string, int>:: iterator it=mp.begin();it!=mp.end(); it++) {ar[j] = it->second;j++;}
	sort(ar,ar+j);
	n--;
	for(int i=j-1; i>-1; i--)
	{
		min+=ar[i]*arr[lol];
		max+=ar[i]*arr[n-lol];
		lol++;
	}
	printf("%d %d\n",min,max);
	return 0;
}

