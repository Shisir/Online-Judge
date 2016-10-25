#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int a,b,q=1;
	scanf("%d%d",&a,&b);
	if(!a && !b) return printf("0 0\n"),0;
	if(a==b) return printf("1 0\n"),0;
	if(b==0) return printf("0 %d\n",a),0;
	if(a==0) return printf("0 0\n"),0;
	if(abs(a)>abs(b))
	{
		if(a>0) return printf("%d %d\n",a/b,a%b),0;
		q=a/b-1;
		if(a<0 && b>0) return printf("%d %d\n",q,a-q*b),0;
		q=a/b+1;
		return printf("%d %d\n",q,a-q*b),0;

	}
	else
	{
		if(a>0) return printf("0 %d\n",a),0;
		if(a<0 && b>0) return printf("-1 %d\n",a+b),0;
		return printf("1 %d\n",a-b),0;
	}
}