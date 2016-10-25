#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[4],b[4];
	cin >> n;
	for(int i=0; i<n; ++i) scanf("%d%d",&a[i],&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	if(n == 1 || b[n-1] == b[0] || a[n-1] == a[0]) printf("-1\n");
	else printf("%d\n",(b[n-1] - b[0]) * (a[n-1] - a[0]));
	
	return 0;
}