#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	string a,b;
	cin>>a>>b;
	int l1=a.length(),l2=b.length();
	if(l1!=l2) return printf("NO\n"),0;
	for(int i=0; i<l1; i++) if(a[i]!=b[l1-1-i]) return printf("NO\n"),0;
	return printf("YES\n"),0;
}

