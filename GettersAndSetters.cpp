#include <bits/stdc++.h>
using namespace std;

class Book{
     private:
          string title;
          string author;
     public:
          Book(string title, string author){
               this->setTitle(title);
               this->setAuthor(author);
          }

          string getTitle(){
               return this->title;
          }
          void setTitle(string title){
               this->title = title;
          }
          string getAuthor(){
               return this->author;
          }
          void setAuthor(string author){
               this->author = author;
          }

          void readBook(){
               cout << "Reading " + this->title + " by " + this->author << endl;
          }
};

int main(){
  Book book1("Harry Potter", "JK Rowling");
  cout << book1.getTitle() << endl;

  Book book2("Lord of the Rings", "JRR Tolkien");
  cout << book2.getTitle() << endl;
}
