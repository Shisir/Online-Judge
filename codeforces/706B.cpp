#include <bits/stdc++.h>

using namespace std;

int n,a,b,c;
vector<int> arr;

int main()
{	
	scanf("%d",&n);

	for (int i = 0; i <n; ++i)
	{
		scanf("%d",&b);
		arr.push_back(b);
	}
	sort(arr.begin(),arr.end());
	scanf("%d",&c);

	for (int i = 0; i <c; ++i)
	{
		scanf("%d",&a);
		cout<<(upper_bound (arr.begin(), arr.end(), a)-arr.begin())<<endl;
	}
	return 0;
}	