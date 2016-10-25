#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)

long long int b;

int main() 
{
	long long int test,digits,size;
	cin>>test;
	test++;
	for(int t=1; t<test; t++)
	{
		string coordinates,num;
		cin>>coordinates;
		size=coordinates.length();

		if(coordinates[0]=='R' && coordinates[1]>='0' && coordinates[1]<='9')
		{
			b=coordinates.find('C');
			if(b>size) goto RC;
			num=coordinates.substr(b+1,size-b+1);
			for(int i=0; i<num.size(); i++) digits=digits*10+num[i]-48;
			num="";

			while(digits)
			{
				num+=(((digits-1)%26)+65);
				digits=(digits-1)/26;
			}

			for(int i=num.size()-1; i>-1; i--) cout<<num[i];
			for(int i=1; i<b; i++) cout<<coordinates[i];
			
		}
		else
		{
			RC:
			long long int index,power=0,collumn=0;
			for(index=0; index<size; index++)
			{
				if(coordinates[index] >='0' && coordinates[index] <='9') break;
			}
			for(int i=0; i<index; i++) collumn=(collumn*26)+(coordinates[i]-64);
			cout<<'R';
			for(int i=index; i<size; i++) cout<< coordinates[i];
			cout<< 'C' << collumn;	
		}
		cout<<"\n";	
	}	

	return 0;
}

