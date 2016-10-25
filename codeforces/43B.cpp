#include <bits/stdc++.h>
using namespace std;
char h[202],t[202];
int save[202];
int main() 
{	
	gets(h);gets(t);save[' ']=205;
	for(int i=0; h[i]; i++) save[h[i]]++;
	for(int i=0; t[i]; i++) if(save[t[i]]--<1) return printf("NO\n"),0;	
	return printf("YES\n"),0;
}