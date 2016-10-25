#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number;
    int arr[]={6,2,5,5,4,5,6,3,7,6};
    int test,sum=0;
    cin>>test;

    for(int i=0; i<test; i++)
    {
      sum=0;
      cin>>number;
      for(int j=0; j<number.length(); j++)
      {
        sum+=arr[number[j]-48];
      }

      cout<<sum<<" leds"<<endl;
    }



    return 0;
}
