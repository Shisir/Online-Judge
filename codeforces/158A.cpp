#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int score[50];
	int n,k;
	cin>>n>>k;

	for (int i = 0; i < n; ++i)	cin>>score[i];

	int compare=score[k-1],count=0;	
	for(int i=0; i<n; i++)
	{	
		if(score[i]==0 && compare==0) continue;
		if(score[i]>=compare) count++;
		else break;
	}	
	cout << count <<endl;

	return 0;
}
