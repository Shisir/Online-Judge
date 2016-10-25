#include <bits/stdc++.h>

using namespace std;
string Month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main() 
{	
	string month;
	int n;
	cin>>month>>n;
	for(int i=0; i<12; i++) 
	{
		if(Month[i]==month) return cout<<Month[(i+n)%12]<<'\n',0;
	}

	return 0;
}