#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	//ios_base::sync_with_stdio(false);cin.tie(0);
	double n,m,a;
	cin>>n>>m>>a;
	long long int c = ceil(n/a)*ceil(m/a);
	cout << c << endl;

	return 0;
}
