#include <bits/stdc++.h>

using namespace std;
int a[100];
int main() 
{    
    long long sum = 0,k=10,c=10,n=5,o=5;
    int i, j;
    a[0]=5;
    for (int i = 1; i < n; ++i)
    {
        a[i]=(a[i-1]*k+c)%1000007;
       // printf("%d\n",a[i] );
    }
    for( i = 0; i < n; i++ )
    {for( j = i + 1; j < n; j++ )
    sum += abs( a[i] - a[j] ); 
    printf("%lld\n",sum );}


    return 0;
}