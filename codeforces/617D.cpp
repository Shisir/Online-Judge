#include <bits/stdc++.h>

using namespace std;
struct point
{
	int x,y;
};
int main() 
{	
	point p1,p2,p3;
	scanf("%d%d%d%d%d%d",&p1.x,&p1,y,&p2.x,&p2.y,&p3.x,&p3.y);
	if(p1.x==p2.x&& p2.x==p3.x) return printf("1\n"),0;
	if(p1.y==p2.y&& p2.y==p3.y) return printf("1\n"),0;
	if((p1.x==p2.x && p2.x!=p3.x)||(p1.x==p3.x && p2.x!=p3.x)|| (p3.x==p2.x && p2.x!=p1.x)) return printf("2\n"),0;
	if((p1.y==p2.y && p2.y!=p3.y)||(p1.y==p3.y && p2.y!=p3.y)|| (p3.y==p2.y && p2.y!=p1.y)) return printf("2\n"),0;
	

	return 0;
}