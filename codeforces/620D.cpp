#include <bits/stdc++.h>

using namespace std;
int arr[2002],arr2[2002];
map<int,int>mp,mp2;
int main() 
{	
	int n,n1,a,b;
	long long sum1=0,sum2=0,bal,chal,fal;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {scanf("%d",&arr[i]);sum1+=arr[i];mp[arr[i]]=i;}
	scanf("%d",&n1);	
	for(int i=0; i<n1; i++) {scanf("%d",&arr2[i]);sum2+=arr2[i];mp2[arr2[i]]=i;}
	if(abs(sum1-sum2)==0) return printf("0\n0\n"),0;
	else
	{
		int res1,res2;
		bool f=true,f2=true;
		bal=sum1,chal=sum2;
		fal=abs(bal-chal);
		for(int i=n-1; i>-1; i--)
		{
			for(int j=0; j<n1; j++)
			{
				if(fal>abs((bal-arr[i]+arr2[j])-(chal-arr2[j]+arr[i])))
				{
					printf("%d %d %lld %lld %lld\n",i+1,j+1,sum1-arr[i]+arr2[j],sum2-arr2[j]+arr[i],abs((bal-arr[i]+arr2[j])-(chal-arr2[j]+arr[i])));
					f=false;
					a=arr[i];
					b=arr2[j];
					bal=bal-arr[i]+arr2[j],chal=chal-arr2[j]+arr[i];
					fal=abs((bal-arr[i]+arr2[j])-(chal-arr2[j]+arr[i]));
				}
			}
		}
		printf("adsd%d %d\n",a,b);
		if(f) return printf("%lld\n0\n",abs(sum1-sum2)),0;
		arr[mp[a]]=b;
		arr2[mp2[b]]=a;
		res1=mp[a],res2=mp2[b];
		sum1=sum1-a+b,sum2=sum2-b+a;
		printf("%lld %lld\n",sum1,sum2 );
		sort(arr,arr+n);sort(arr2,arr2+n1);
		bal=sum1,chal=sum2;
		fal=abs(bal-chal);
		for(int i=n-1; i>-1; i--)
		{
			for(int j=0; j<n1; j++)
			{
				if(fal>abs((bal-arr[i]+arr2[j])-(chal-arr2[j]+arr[i])))
				{
					printf("ads%d %d %lld %lld %lld\n",i+1,j+1,sum1-arr[i]+arr2[j],sum2-arr2[j]+arr[i],abs((bal-arr[i]+arr2[j])-(chal-arr2[j]+arr[i])));
					f2=false;
					a=arr[i];
					b=arr2[j];
					bal=bal-arr[i]+arr2[j],chal=chal-arr2[j]+arr[i];
					fal=abs((bal-arr[i]+arr2[j])-(chal-arr2[j]+arr[i]));
				}
			}
		}
		if(f2) return printf("%lld\n1%d %d\n",abs(sum1-sum2),res1,res2),0;
		else printf("%lld\n2\n%d %d\n%d %d",abs(sum1-sum2),res1,res2,mp[a],mp2[b]);
	}

	return 0;
}