#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	string line;
	cin>>line;
	line.replace(line.find("at",1),2,"@");
	for(int i=line.find("dot",1); i<line.size()-3; i=line.find("dot",1)) line.replace(i,3,"."); 
	return cout<<line<<'\n', 0;
}