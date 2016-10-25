#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main() 
{	
	string binary[1001];
	for(int i=1; i<1001; i++) binary[i]=bitset<10>(i).to_string();
	int n,t;
	scanf("%d",&n);
	for(int i=0; i<n; i++) 
	{
		scanf("%d",&t);
		if(arr[t]!=0) return printf("NO\n"),0;
		arr[t]=1;
	}
	printf("YES\n");
	for(int i=1; i<1001; i++) if(arr[i]!=0) cout<<binary[i] <<endl;
	
	return 0;
}

