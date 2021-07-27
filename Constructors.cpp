#include <bits/stdc++.h>
using namespace std;

class Book{
     public:
          string title;
          string author;

          Book(string title, string author){
               this->title = title;
               this->author = author;
          }

          void readBook(){
               cout << "Reading " + this->title + " by " + this->author << endl;
          }
};

int main(){
  Book book1("Harry Potter", "JK Rowling");
  cout << book1.title << endl;

  Book book2("Lord of the Rings", "JRR Tolkien");
  cout << book2.title << endl;
}
