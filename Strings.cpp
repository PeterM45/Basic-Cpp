#include <bits/stdc++.h>
using namespace std;

int main(){
  string greeting = "Hello";
  //      indexes:   01234

  cout << greeting.length() << endl;
  cout << greeting[0] << endl;
  cout << greeting.find("llo") << endl;
  cout << greeting.substr(2) << endl;
  cout << greeting.substr(1, 3) << endl;
}
