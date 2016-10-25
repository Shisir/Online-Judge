#include <bits/stdc++.h>

using namespace std;
int a,b,n,res=0;
int arr[100];

int main() 
{	
	
	scanf("%d%d",&a,&b);

	for (int i = 0; i <a; ++i)
	{
		scanf("%d",&n);
		if(n>b)res+=2;
		else res+=1;
	}

	return  printf("%d\n",res ),0;
	
}