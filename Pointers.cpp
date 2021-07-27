#include <bits/stdc++.h>
using namespace std;

int main(){
  int num = 10;
  cout << &num << endl; // returns memory address of 10

  int *pNum = &num;
  cout << pNum << endl;
  cout << *pNum << endl; // Dereferencing
}
