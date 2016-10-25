#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{	
	string s,t;
	int a,b;
	cin>>s>>t;
	s[0]=s[0]-'a'+'1';
	t[0]=t[0]-'a'+'1';
	//cout <<s<<" " <<t<<endl;
	if(s[0]==t[0] || s[1]==t[1]) printf("%d\n",abs(s[0]-t[0]+s[1]-t[1]));
	else
	{
		a=abs(s[0]-t[0]);
		b=abs(s[1]-t[1]);
		if(s[1]<t[1]) printf("%d\n",abs(t[1]-(s[1]+a)));
		else printf("%d\n",abs(t[1]-(s[1]-a)));

	}

	/*a=abs(s[0]-t[0]);
	b=abs(s[1]-t[1]);
	cout <<a << " " <<b <<endl;
	if((a+b)>7) printf("%d\n",abs((a+b)-7));
	else printf("%d\n",a+b);
*/
	return 0;
}

