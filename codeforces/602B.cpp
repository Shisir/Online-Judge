#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, tmp, cur, hstr=0, lstr=0, maxstr=0;
    cin>>n;
    cin>>cur;
    hstr++;
    lstr++;
    for(long long i=0; i<n-1; i++){
        cin>>tmp;
        if(cur==tmp){hstr++; lstr++;}
        else if(cur<tmp){lstr=hstr+1; hstr=1;}
        else {hstr=lstr+1; lstr=1;}
        maxstr=max(maxstr, max(hstr, lstr));
        cur=tmp;
    }
    cout<<maxstr;
}