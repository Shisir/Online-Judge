#include <bits/stdc++.h>

using namespace std;

string n;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int test;
	scanf("%d\n",&test);
	for (int i = 0; i <test; ++i)
	{
		cin>>n;
		
		int cnt=0;
		if(n.length()<5) 
			{
				printf("-1\n");
				continue;
			}
		for(int j=0; n[j]; j++) if(n[j]=='1') cnt++;
		if(cnt==n.length())
		{
			printf("-1\n");
			continue;
		} 
		for (int j = 0; j <cnt; ++j)printf("1");
		for (int j = 0; j <n.length()-cnt; ++j) printf("0");
	}
	
	
	return 0;
}