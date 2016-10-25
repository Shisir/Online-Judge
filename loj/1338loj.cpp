#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{
	int test;
	string hudai,f1,f2;
	scanf("%d",&test);
	getline(cin,hudai);

	for(int t=1; t<=test; t++)
	{
		getline(cin,f1);
		getline(cin,f2);
		string first="",second="";
		int len1,len2;
		len1=f1.length();
		len2=f2.length();

		for(int i=0; i<len1; i++)
		{
			if(f1[i]==' ');
			else if(f1[i]>='A' && f1[i]<='Z') first+=f1[i]+32;
			else first+=f1[i];
		}
		for(int i=0; i<len2; i++)
		{
			if(f2[i]==' ');
			else if(f2[i]>='A' && f2[i]<='Z') second+=f2[i]+32;
			else second+=f2[i];
		}
		for(int i=1; first[i]; i++)
			for(int j=i-1; j>=0 && first[j]>first[j+1]; j--) swap(first[j],first[j+1]);	
		for(int i=1; second[i]; i++)
			for(int j=i-1; j>=0 && second[j]>second[j+1]; j--) swap(second[j],second[j+1]);
			
		if(first==second) cout<<"Case "<<t << ": Yes\n" ;		
		else cout<<"Case "<<t << ": No\n" ;
	}	

	return 0;
}

