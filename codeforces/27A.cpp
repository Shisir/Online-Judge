#include <bits/stdc++.h>
using namespace std;
int arr[3002];
int main() 
{	
	int n,temp;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){scanf("%d",&temp);arr[temp]=1;}
	for (int i = 1; i <=3001; ++i)	if(!arr[i]) {printf("%d\n",i);return 0;}
}

