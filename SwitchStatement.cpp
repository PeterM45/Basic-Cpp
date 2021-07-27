#include <bits/stdc++.h>
using namespace std;

int main(){
  // Type of conditional
  char myGrade = 'A';
  switch(myGrade){
       case 'A':
            cout << "You Pass" << endl;
            break;
       case 'F':
            cout << "You fail" << endl;
            break;
       default:
            cout << "Invalid grade" << endl;
  }
}
