#include <bits/stdc++.h>

using namespace std;
vector<double> v;
int main() 
{

	double n;
	while(scanf("%lf",&n)!=EOF)v.push_back(n);
	for(int i=v.size()-1; i>-1; i--)printf("%.4lf\n",sqrt(v[i]));

	return 0;
}