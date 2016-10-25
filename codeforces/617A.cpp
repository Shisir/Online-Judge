#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,cnt=0;
	scanf("%d",&n);
	cnt=n/5;
	if(n%5!=0)cnt++; 	
	return printf("%d\n",cnt),0;
}