#include <bits/stdc++.h>

using namespace std;
const int maxi = 262144;
int segTree[maxi];
int input[maxi];

void constructTree(int input[],int segTree[],int low, int high, int pos )
{
	if(low==high)
	{
		segTree[pos]=input[low];
		return;
	}
	int mid=(low+high)/2;

	constructTree(input, segTree, low, mid,2*pos+1);
	constructTree(input, segTree,mid+1,high,2*pos+2);
	segTree[pos]=min(segTree[2*pos+1],segTree[2*pos+2]);
}

int rangeMinQuery(int segTree[], int qlow, int qhigh, int low, int high, int pos)
{
	if(qlow<=low && qhigh>=high) return segTree[pos];
	if(qlow>high || qhigh<low) return 99999;
	int mid=(low+high)/2;
	return min(rangeMinQuery(segTree,qlow,qhigh, low,mid,2*pos+1),rangeMinQuery(segTree,qlow,qhigh,mid+1,high,2*pos+2));
}

int main(void)
{
	int testCase;
	scanf("%d",&testCase);

	for(int test=1; test<=testCase; test++)
	{
		int number, query,size;
		scanf("%d%d",&number,&query);
		int a=ceil(log(number)/log(2));
		a=pow(2,a);
		input[number];
		segTree[2*a];

		for (int i = 0; i < a-1; ++i)
		{
			segTree[i]=99999999;
		}

		for (int i = 0; i < number; ++i)
		{
			scanf("%d",&input[i]);
		}
		constructTree(input, segTree, 0, number-1, 0);
		printf("Case %d:\n",test);

		for(int i=0; i<query; i++)
		{
			int qlow, qhigh;
			scanf("%d%d",&qlow,&qhigh);
			printf("%d\n",rangeMinQuery(segTree, qlow-1, qhigh-1,0,number-1,0));
		}
		
	}

	return 0;
}