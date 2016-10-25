#include <bits/stdc++.h>

using namespace std;
set<string>save;
int main() 
{	
	int n;string hudai;
	cin>>n;getline(cin,hudai);
	while(n--){getline(cin,hudai);save.insert(hudai);} 
	return cout<<save.size(), 0;
}