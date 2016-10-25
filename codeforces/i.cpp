#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int number;
	map<char,string>mp;
	map<string,char> mp2;
	mp['0']=".***";
	mp['1']="*...";
	mp['2']="*.*.";
	mp['3']="**..";
	mp['4']="**.*";
	mp['5']="*..*";
	mp['6']="***.";
	mp['7']="****";
	mp['8']="*.**";
	mp['9']=".**.";

	mp2[".***"]='0';
	mp2["*..."]='1';
	mp2["*.*."]='2';
	mp2["**.."]='3';
	mp2["**.*"]='4';
	mp2["*..*"]='5';
	mp2["***."]='6';
	mp2["****"]='7';
	mp2["*.**"]='8';
	mp2[".**."]='9';

	while(scanf("%d",&number))
	{
		if(number==0) break;
		char operation,arr[110];
		string save,save2,save3,s;
		scanf("\n%c\n",&operation);
		
		if(operation=='S')
		{
			scanf("%s",arr);
			s=mp[arr[0]];
			printf("%c%c",s[0],s[1]);
			for(int i=1; i<number; i++)
			{
				s=mp[arr[i]];
				printf(" %c%c",s[0],s[1]);
			}
			printf("\n");

			s=mp[arr[0]];
			printf("%c%c",s[2],s[3]);
			for(int i=1; i<number; i++)
			{
				s=mp[arr[i]];
				printf(" %c%c",s[2],s[3]);
			}
			printf("\n");
			printf("..");
			for (int i = 1; i < number; ++i)
			{
				printf(" ..");
			}
			printf("\n");
		}
		else
		{
			getline(cin,save);
			getline(cin,save2);
			getline(cin,save3);

			for (int i = 0; i < 3*number-1; i=i+3)
			{
				string s1="";
				s1+=save[i];
				s1+=save[i+1];
				s1+=save2[i];
				s1+=save2[i+1];
				printf("%c",mp2[s1]);
			}
			printf("\n");

		}
	}

	return 0;
}


