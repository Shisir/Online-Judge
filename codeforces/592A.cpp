#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main(void)
{
	char ch[9][9];
	int w1min=999,bmin=999;
	for (int i = 0; i < 8; ++i)
	{
		scanf("%s",ch[i]);
	}

	for (int i = 0; i < 8; ++i)
	{
		bool f=true;
		int index,bmax=0;
		for(int j=0; j<8; j++)
		{
			if(ch[i][j]=='B')
			{
				f=false;
				index=j;
			}

			if(!f)
			{
				for(int l=i+1; l<8; l++)
				{
					if(ch[l][index]=='B'||ch[l][index]=='W')
					{
						bmax=0;
						break;
					}
					else bmax++;
				}
			}
			if(bmax==0) continue;
			if(bmin>bmax) bmin=bmax;
		}
		
	}

	for (int i = 7; i >-1; i--)
	{
		bool f=true;
		int index,wmax=0;
		for(int j=0; j<8; j++)
		{
			if(ch[i][j]=='W')
			{
				f=false;
				index=j;
			}
			if(!f)
			{
				for(int l=i-1; l>-1; l--)
				{
					if(ch[l][index]=='B'||ch[l][index]=='W')
					{
						wmax=0;
						break;
					}
					else wmax++;
				}
			}
			if(wmax==0) continue;
			if(w1min>wmax) w1min=wmax;
		}
		
	}
	if(w1min>bmin) printf("B\n");
	else printf("A\n");


	return 0;
}