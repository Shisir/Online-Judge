#include <bits/stdc++.h>

using namespace std;
char ch[101];
int arr[101],m;
int main() 
{	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,r;
	scanf("%d\n%s",&n,ch);
	for(int i=0; i<n; i++) if(ch[i]=='1') arr[m++]=i;
	n=arr[1]-arr[0];
	for(int i=2; i<m; i++) if(arr[i]-arr[i-1]!=n) return printf("NO\n"),0;
	return printf("YES\n"),0;
}

