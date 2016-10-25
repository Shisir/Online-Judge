#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int test;
	scanf("%d",&test);

	for(int t=1; t<=test; t++)
	{
		int n,m,temp,temp2,count=0;
		scanf("%d %d",&n,&m);
		int arr[n];
		for(int i=0; i<n; i++) scanf("%d",&arr[i]);

		for(int i=0; i<m; i++)
		{
			char operation;	
			scanf(" %c",&operation);
			if(operation=='S')
			{	
				scanf("%d",&temp);
				
				for (int lo = 0; lo < n; lo++) arr[lo]+=temp;
			}

			else if(operation=='M')
			{
				scanf("%d",&temp);
				for (int lo = 0; lo < n; lo++) arr[lo]*=temp;
			}
			else if(operation=='D')
			{
				scanf("%d",&temp);
				for (int lo = 0; lo < n; lo++) arr[lo]/=temp;
			}
			else if(operation=='R') count++;
			else if(operation=='P')
			{
				scanf("%d%d",&temp,&temp2);
				int tem; 
				if(count%2==1)
				{
					int start=0,end=n-1;
					 while(start <= end)
					  {
					    tem = arr[start];   
					    arr[start] = arr[end];
					    arr[end] = tem;
					    start++;
					    end--;
					  }
					  count=0;
				}
				tem=arr[temp];
				arr[temp]=arr[temp2];
				arr[temp2]=tem;	
			}
		}
		
		printf("Case %d:\n",t);
		if(count%2==0)
			{	
				for(int i=0; i<n-1; i++)
					 printf("%d ",arr[i]);
					printf("%d\n",arr[n-1]);
			}
		else
		 {	
			for(int i=n-1; i>0; i--)	
			 printf("%d ",arr[i]);	
			printf("%d\n",arr[0]);
		}
	}

	return 0;
}
