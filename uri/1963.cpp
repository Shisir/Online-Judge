#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	double a,b;
	scanf("%lf%lf",&a,&b);
	return printf("%.2lf%%\n",(abs(a-b)*100)/a),0;
}