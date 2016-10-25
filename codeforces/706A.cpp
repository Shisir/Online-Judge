#include <bits/stdc++.h>

using namespace std;


int main()
{	

	/*freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
*/int n,a,b,x,y,c;
double mini=1111111111,dis;
	scanf("%d%d",&a,&b);
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		scanf("%d%d%d",&x, &y, &c);
		mini=min(mini,(sqrt((x-a)*(x-a)+(y-b)*(y-b)))/c);
	}
	printf("%lf\n",mini );
	return 0;
}	