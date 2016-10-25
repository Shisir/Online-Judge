#include <bits/stdc++.h>

using namespace std;

string a_romano(int value)
{
  struct romandata_t { int value; char const* numeral; };
  static romandata_t const romandata[] =
     { 1000, "M",
        900, "CM",
        500, "D",
        400, "CD",
        100, "C",
         90, "XC",
         50, "L",
         40, "XL",
         10, "X",
          9, "IX",
          5, "V",
          4, "IV",
          1, "I",
          0, NULL }; // end marker
 
  string result;
  for (romandata_t const* current = romandata; current->value > 0; ++current){
    while (value >= current->value){
      result += current->numeral;
      value  -= current->value;
    }
  }
  return result;
}



int main()
{
  int n;
  scanf("%d",&n);
 cout << a_romano(n) <<endl; 
}