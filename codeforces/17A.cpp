#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) 
{
    if(num < 2)  return false;
    else if(num == 2)  return true;
    else if(num % 2 == 0) return false;
    for(int i = 3, max = sqrt(num); i <= max; i += 2) if(num % i == 0) return false;
    return true;
}

int main() 
{
    int n,k,loop;
    vector<int> v;
    scanf("%d%d",&n,&k);
    if(!k) {printf("YES\n");return 0;}
    for(int i=3; i<=n; i+=2)
    {
        if(isPrime(i)) v.push_back(i);
    }  
    loop=v.size();
    if(loop<=k){ printf("NO\n");return 0;}
    for(int i=0; i<loop; i++)
    {
        for(int j=1; j<loop; j++) if(v[j-1]+v[j]+1==v[i]){ k--;break;}
        if(k==0) break;
    }
     puts(k==0? "YES":"NO");

    return 0;
}
