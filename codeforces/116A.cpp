#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,a,b,max=0,count=0;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		count+=b-a;
		if(max<count) max=count;
	}
	cout <<max << endl;

	return 0;
}
