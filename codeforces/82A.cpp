#include<bits/stdc++.h>

using namespace std;
char arr[][8]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
int main()
{
 int n;
 scanf("%d",&n);
 while(n>5)n=n/2-2;
 return printf("%s\n",arr[n-1]),0;
}