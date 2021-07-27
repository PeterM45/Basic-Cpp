#include <bits/stdc++.h>
using namespace std;


class Book{
     public:
          string title;
          string author;

          void readBook(){
               cout << "Reading " + this->title + " by " + this->author << endl;
               // return object values
          }
};

int main(){
  Book book1; // creating an object
  // declaring object values
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";

  book1.readBook(); // runs func in class 
  cout << book1.title << endl;

  Book book2;
  book2.title = "Lord of the Rings";
  book2.author = "JRR Tolkien";

  book2.readBook();
  cout << book2.title << endl;
}
