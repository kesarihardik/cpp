#include <iostream>
using namespace std;

// struct - used to group different datatypes
struct Book{
    string name;     //struct members are public by default.
    string author;
    int totalPages;

    Book(string name, int totalPages){
        this->name= name;
        this->totalPages = totalPages;
    }
};

int main(){
   Book b("a book",1);
   cout<<b.name<<endl;
   return 0;
}