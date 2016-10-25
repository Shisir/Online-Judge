#include <bits/stdc++.h>

using namespace std;
int arr[3];
int main() 
{	
	int n,t;
	scanf("%d",&n);
	for(int i=0; i<n; i++){scanf("%d",&t);arr[t%3]++;}
	return printf("%d\n",min(arr[1],arr[2])+arr[0]/2 ), 0;
}