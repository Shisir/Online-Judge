#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)

int main(void)
{
	int test,b;
	char a[250];
	sf(test);

	for(int t=1; t<=test; t++)
	{
		scanf("%s",a);
		sf(b);

		int init=0;
		long long int  rem=0;
		if(b<0) b*=-1;
		if(a[0]=='-') init=1;

		for(int i=init; a[i]; i++)	rem=(rem*10+a[i]-48)%b;
			
		if(rem==0) printf("Case %d: divisible\n",t );
		else printf("Case %d: not divisible\n",t );	
	}

	return 0;
}