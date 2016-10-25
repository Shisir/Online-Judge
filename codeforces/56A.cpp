#include <bits/stdc++.h>

using namespace std;
string name[]={"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
int main() 
{	
	int n,count=0;
	string l;
	cin>>n;
	for(int i=0; i<n,cin>>l; i++) for(int j=0;j<29; j++) if(name[j]==l) count++;
	return printf("%d\n",count),0;
}