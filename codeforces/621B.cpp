#include <bits/stdc++.h>

using namespace std;
string line[10]={"x^y^z","x^z^y","(x^y)^z","y^x^z","y^z^x","(y^x)^z","z^x^y","z^y^x","(z^x)^y"};
int main() 
{	
	long double x,y,z,maxi=-1;
	int in;
	cin>>x>>y>>z;
	if(pow(z,y*x)>=maxi) maxi=pow(z,y*x),in=8;
	if(pow(z,pow(y,x))>=maxi) maxi=pow(z,pow(y,x)),in=7;
	if(pow(z,pow(x,y))>=maxi) maxi=pow(z,pow(x,y)),in=6;
	if(pow(y,x*z)>=maxi) maxi=pow(y,x*z),in=5;
	if(pow(y,pow(z,x))>=maxi) maxi=pow(y,pow(z,x)),in=4;
	if(pow(y,pow(x,z))>=maxi) maxi=pow(y,pow(x,z)),in=3;
	if(pow(x,y*z)>=maxi) maxi=pow(x,y*z),in=2;
	if(pow(x,pow(z,y))>=maxi) maxi=pow(x,pow(z,y)),in=1;
	if(pow(x,pow(y,z))>=maxi) maxi=pow(x,pow(y,z)),in=0;
	cout<<line[in]<<endl; 
	return 0;
}