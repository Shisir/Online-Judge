#include <bits/stdc++.h>

using namespace std;
int arr[100001],As[100001],Bs[100001],maxi=-11111;
char s[100001];
int main() 
{	
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) scanf("%d",&arr[i+1]);
	gets(s);	
	gets(s);
	cout<<s<<endl;
	for(int i=1; i<=n; i++)
	{
		if(s[i]=='A')As[i]+=arr[i-1],Bs[i]+=Bs[i-1];
		else Bs[i]+=arr[i-1],As[i]+=As[i-1];
		printf("%d %d\n",As[i],Bs[i]);
	}
	if(s[n-1]=='A')As[n+1]+=arr[n-1],Bs[n]+=Bs[n-1];
	else Bs[n+1]+=arr[n],As[n]+=As[n-1];
	for(int i=1; i<=n; i++)
	{
		maxi=max(maxi,max(As[i-1],Bs[n+1]-Bs[i]));
		maxi=max(maxi,max(Bs[i],As[n+1]-As[i]));
	}
	printf("%d\n",maxi );

	return 0;
}