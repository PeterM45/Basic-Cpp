#include <bits/stdc++.h>
using namespace std;

int main(){
  // int  numberGrid[2][3];
  int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
  numberGrid[0][1] = 99;

  cout << numberGrid[0][0] << endl; // prints 1
  cout << numberGrid[0][1] << endl; // prints 99
}
