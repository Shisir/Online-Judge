#include <bits/stdc++.h>

using namespace std;

int c[10005], a[10005], n;
int main() {
   
   long long res = 0LL;
   scanf("%d", &n);
   for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
   
   for(int i = 1; i <= n; i++) {
      if(a[i] == 1) {
         int c = 0;
         res = 1LL;
         int pos;
         for(int j = n; j >= i; j--) {
            if(a[j] == 1) {
               pos = j;
               break;
            }
         }
         for(int j = i + 1; j <= pos; j++) {
            if(a[j] == 0) {
               c++;
            }
            else {
               res *= (c + 1);
               c = 0;
            }
         }
        return cout<<res<<endl,0;
      }
   }
   cout << res << endl;
   return 0;
}