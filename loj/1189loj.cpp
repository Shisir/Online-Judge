#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)

long long int save[21];
long long int digit[21];


int main(void)
{
        save[0]=1;
        save[1]=1;
       	save[2]=2;
        save[3]=6;
        save[4]=24;
        save[5]=120;
        save[6]=720;
        save[7]=5040;
        save[8]=40320;
        save[9]=362880;
        save[10]=3628800;
        save[11]=39916800;
        save[12]=479001600;
        save[13]=6227020800;
        save[14]=87178291200;
        save[15]=1307674368000;
        save[16]=20922789888000;
        save[17]=355687428096000;
        save[18]=6402373705728000;
        save[19]=121645100408832000;
        save[20]=2432902008176640000;

        int test;
        cin>>test;

        for(int t=1; t<=test; t++)
        {
        	long long int number,sum=0,dig=0,i;
        	memset(digit,0,21);
        	cin>>number;

        	bool flag=true;

        	for( i=0; i<21; i++) if(save[i]>number) break;

        	for(int j=i-1; j>-1; j--)
        		{
        			sum+=save[j];
        			if(number==sum)
        			{
        				flag=false;
        				digit[dig]=j;
        				break;
        			}
        			
        			else if(number<sum) sum-=save[j];
        			else 
        				{
        					digit[dig]=j;
        					dig++;
        				}
        		}	
        	cout<< "Case " <<t << ": ";
        	if(flag) cout<<"impossible";
        	else
        	{
        		for(int i=dig; i>-1; i--) 
        			{
        				cout<<digit[i] <<'!';
        				if(i!=0) cout<<'+'; 
        			}

        	}	
        	cout<<"\n";
        }
	return 0;
}