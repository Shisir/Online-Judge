#include <bits/stdc++.h>

using namespace std;
int res;
int main() 
{	
	int n,a,b;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	
	for (int i = 0; i < n; ++i)
	{
		char huda;
		int cnt=0;
		for (int j = 0; j <a; ++j)
		{

			cin>>huda;
			if(huda=='Y') cnt++;
		}
		if(cnt>=b) res++;
	}
	printf("%d\n",res );
	return 0;
}