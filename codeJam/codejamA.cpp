#include <bits/stdc++.h>

using namespace std;
int a[10];
int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		for (int i = 0; i <10; ++i)
		{
			a[i]=0;
		}
		string line,temp;
		int z=0,e=0,r=0,o=0;
		cin>>line;
		temp=line;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='Z') z++;
			else if(temp[i]=='E')e++;
			else if(temp[i]=='R')r++;
			else if(temp[i]=='O') o++; 
		}
		z=min(min(z,e),min(r,o));
		
		int o1=0,n=0,e1=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='O') o1++;
			else if(temp[i]=='N')n++;
			else if(temp[i]=='E')e1++;
			
		}
		o1=min(min(o1,n),e1);
		int t0=0,w=0,O=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='T') t0++;
			else if(temp[i]=='W')w++;
			else if(temp[i]=='O')O++;
			
		}
		t0=min(min(t0,w),O);

		int t3=0,h3=0,r3=0,e3=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='T') t3++;
			else if(temp[i]=='H')h3++;
			else if(temp[i]=='R')r3++;
			else if(temp[i]=='E') e3++;
		}
		e3/=2;
		t3=min(min(t3,min(h3,r3)),e3);

		int f4=0,o4=0,u4=0,r4=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='F') f4++;
			else if(temp[i]=='O')o4++;
			else if(temp[i]=='U')u4++;
			else if(temp[i]=='R') r4++; 
		}
		f4=min(min(f4,o4),min(u4,r4));

		int f5=0,i5=0,v5=0,e5=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='F') f5++;
			else if(temp[i]=='I')i5++;
			else if(temp[i]=='V')v5++;
			else if(temp[i]=='E') e5++; 
		}
		f5=min(min(f5,i5),min(v5,e5));

		int s6=0,i6=0,x6=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='S') s6++;
			else if(temp[i]=='I')i6++;
			else if(temp[i]=='X')x6++;
			
		}
		s6=min(min(s6,i6),x6);

		int s7=0,e7=0,v7=0,n7=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='S') s7++;
			else if(temp[i]=='E')e7++;
			else if(temp[i]=='V')v7++;
			else if(temp[i]=='N') n7++;
		}
		e7/=2;
		s7=min(min(s7,min(v7,n7)),e7);

		int e8=0,i8=0,g8=0,h8=0,t8=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='E') e8++;
			else if(temp[i]=='I')i8++;
			else if(temp[i]=='G')g8++;
			else if(temp[i]=='H') h8++;
			else if(temp[i]=='T') t8++;
		}
		
		e8=min(min(e8,min(i8,g8)),min(h8,t8));

		int n9=0,i9=0,e9=0;
		for(int i=0; temp[i]; i++)
		{
			if(temp[i]=='N') n9++;
			else if(temp[i]=='I')i9++;
			else if(temp[i]=='E')e9++;
			
		}
		n9/=2;
		n9=min(n9,min(i9,e9));

		cout<<"Case"<< z<< o1 <<t0 << t3<<f4<< f5 << s6 << s7<<e8<<e9<< endl;
	}

	return 0;
}