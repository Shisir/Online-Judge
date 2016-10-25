#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	set<long long>save;
	long long n,a,b=1000000007,res=1;
	scanf("%lld",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lld",&a);
		if(save.find(a)==save.end()) save.insert(a);
		else save.insert((a*a)%b);
	}
	set<long long>::iterator it,it2;
	for(it=save.begin();it!=save.end();)
	{
		it++;
		for(it2=it;it2!=save.end(); it2++){
		cout<<*it<<" " <<res<<endl;
		res=(res*(*it)*(*it2))%b;
	}}
	printf("%lld\n",res );
	return 0;
}

