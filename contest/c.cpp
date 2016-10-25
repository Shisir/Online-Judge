#include <bits/stdc++.h>

using namespace std;
int lenF,lenS;
string first,second;

int LCS(int i, int j)
{
	if(i==lenF || j==lenS) return 0;
	if(first[i]==second[j]) return 1+LCS(i+1,j+1);
	return max(LCS(i+1,j), LCS(i,j+1));
}

int main(void)
{

	while(cin>>first>>second)
	{
		lenF=first.length();
		lenS=second.length();

		cout<< LCS(0,0) <<endl;

	}

	return 0;
}
