#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		vector<int>v;
		int n,temp,count=0;
		bool f=true;
		double prmt=1,res=1,result=0;
		scanf("%d",&n);
		temp=n;
		while(n)
		{
			v.insert(v.begin(),n%10);
			n/=10;
		}
		do
		{
			count++;	
		} while (next_permutation(v.begin(),v.end()));
		if(count==1) {printf("0.000000000\n");continue;}
		for(int i=2; i<=v.size(); i++) prmt*=i;
		
		result=((1/prmt)*(1-pow((1/prmt),count-1)))/(1-(1/prmt));
		
		printf("%.9lf\n",result);	
		 	
	}
	return 0;
}