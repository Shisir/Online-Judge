#include <bits/stdc++.h>

using namespace std;
int a,b,sum,add,ans,ba;
int base(int n)
{
	int maxi=0;
	while(n) maxi=max(maxi,n%10),n/=10;
	return maxi;
}
int main() 
{	
	scanf("%d%d",&a,&b);
	ba=max(base(a),base(b))+1;
	while(a||b||add)
	{
		sum=a%10+b%10+add;
		add=sum/ba;
		ans++;
		a/=10;
		b/=10;
	}
	return printf("%d\n",ans),0;
}