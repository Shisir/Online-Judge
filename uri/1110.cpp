#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int n,temp;
	while(scanf("%d",&n) && n!=0)
	{
		queue<int> value;
		if(n==1) {printf("Discarded cards:\nRemaining card: 1\n");continue;  }
		for(int i=1; i<=n; i++) value.push(i);
		printf("Discarded cards:");	
		while(value.size()>2)
		{
			printf(" %d,",value.front());
			value.pop();
			temp=value.front();
			value.pop();
			value.push(temp);
		}
		temp=value.front();
		printf(" %d\n",temp);
		value.pop();
		printf("Remaining card: %d\n",value.front());
	}
	return 0;
}