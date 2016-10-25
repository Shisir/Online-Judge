#include <bits/stdc++.h>

using namespace std;
string size[5]={"S","M","L","XL","XXL"},name;
int arr[5],n,save;
int main() 
{	
	for(int i=0; i<5; i++) scanf("%d",&arr[i]);
	scanf("%d",&n);
	while(n--)
	{
		cin>>name;
		for(int i=0; i<5; i++) if(size[i]==name)save=i;
		for(int i=save,j=save;; i++,j--)
		{
			if(i<5 && arr[i])
			{
				arr[i]--;
				cout<<size[i]<<'\n';
				break;
			}
			if(j>=0 && arr[j])
			{
				arr[j]--;
				cout<<size[j]<<'\n';
				break;
			}
		} 
	}	
	return 0;
}