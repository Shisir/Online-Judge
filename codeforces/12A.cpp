#include <bits/stdc++.h>

using namespace std;

#define SYNC        ios_base::sync_with_stdio(0)
#define CT          cin.tie(0)
#define sf(a)       scanf("%d", &a)
#define sff(a, b)   scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

int main() 
{
	char arr[3][3];
	scanf("%s%s%s",arr[0],arr[1],arr[2]);
	if(arr[0][0]!=arr[2][2] || arr[0][1]!=arr[2][1] || arr[0][2]!=arr[2][0] || arr[1][0] !=arr[1][2]) printf("NO\n");
	else printf("YES\n");	

	return 0;
}

