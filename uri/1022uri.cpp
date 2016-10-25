#include <bits/stdc++.h>

using namespace std;

int a,b,c,d,nominator, denominator,gcd;
char ch;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test;
  scanf("%d\n",&test);

  for (int i = 0; i < test; i++)
  {
    scanf("%d / %d %c %d / %d\n",&a,&b,&ch,&c,&d );

    if(ch=='+')
    {
      nominator = a*d+b*c;
      denominator = b*d;
      gcd = __gcd(nominator, denominator);
      printf("%d/%d = %d/%d\n",nominator,denominator,nominator/gcd,denominator/gcd);
    }
    else if(ch=='-')
    {
      nominator = a*d-b*c;
      denominator = b*d;
      gcd = __gcd(nominator, denominator);
      printf("%d/%d = %d/%d\n",nominator,denominator,nominator/gcd,denominator/gcd);
    }

    else if(ch=='*')
    {
      nominator = a*c;
      denominator = b*d;
      gcd = __gcd(nominator, denominator);
      printf("%d/%d = %d/%d\n",nominator,denominator,nominator/gcd,denominator/gcd);
    }
    else{
      nominator = a*d;
      denominator = b*c;
      gcd = __gcd(nominator, denominator);
      printf("%d/%d = %d/%d\n",nominator,denominator,nominator/gcd,denominator/gcd);
    }

  }




  return 0;
}
