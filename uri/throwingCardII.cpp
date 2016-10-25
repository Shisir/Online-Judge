#include <bits/stdc++.h>

using namespace std;
int ans [500001],n;
 
int main ()
{
    ans [1] = 1;
    ans [2] = 2;
    for ( int i = 3,next=2; i <= 500000; i++ )
    {
        if ( i < next ) next = 2;
        ans [i] = next;
        next += 2;
    }
    while ( scanf ("%d", &n) && n ) printf ("%d\n", ans [n]);
    return 0;
}