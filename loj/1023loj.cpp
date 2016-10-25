#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{	
	int test,n,k;
	sf(test);

	for(int t=1; t<=test; t++)
	{
		sff(n,k);
		printf("Case %d:\n",t);
		char arr[n+1],ch='A';
		for(int i=0; i<n; i++)
		{
			arr[i]=ch;
			ch++;
		}
		arr[n] = '\0';
		puts(arr);
	
		for(int kl=1; kl<k ; kl++)
		{
			bool b = true;
			for(int i=n-2; i>-1; i--)
			{
				if(arr[i]<arr[i+1])
				{
					b = false;
					int pos = i+1;
					for(int j=i+2; j<n; j++)
					{
						if(arr[i]>arr[j])
						{
							break;
						}
						else pos++;
					}
					swap(arr[i],arr[pos]);
					sort(arr+i+1,arr+n);
					break;
				}
				
			}
			if(b) break;
			puts(arr);
		}

	}

	return 0;
}

