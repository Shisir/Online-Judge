#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int maxi=-2501,n,a,b,c,d,e,sum=0,suc,unsec;
	string name,save;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>name>>suc>>unsec>>a>>b>>c>>d>>e;
		sum=(suc*100)-(unsec*50)+a+b+c+d+e;
		if(sum>maxi) maxi=sum,save=name;
	}
	return cout<<save<<endl, 0;
}