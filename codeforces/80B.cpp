#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b;
	scanf("%d:%d",&a,&b);
	return printf("%lf %lf\n",(a%12)*(double)30+(double)b*.5,(double)b*6), 0;
}