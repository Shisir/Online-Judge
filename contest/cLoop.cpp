#include <bits/stdc++.h>

using namespace std;
int lenF,lenS;
string first,second;
int answer[lenF][lenS];

int LCS(int i, int j)
{
	for(int i=lenF-1; i>=0; i--)
	{
		for(int j=0; j<lenS; j++)
		{
			if(i==0 || j==lenS-1) return answer[i][j];
			                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
		}
	}
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
