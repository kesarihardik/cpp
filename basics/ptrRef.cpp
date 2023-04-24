#include <iostream>
using namespace std;

//pointer - variable containing memory adress
//reference - just another name, alias.
//use reference over pointer.
//pointer can be reassigned, null unlike ref.

int main(){
  int i = 190;
  int &y = i;  
  //   int &y                       //error              must be initialized.  
  int* ptr_x = &i;           
  int* ptr_y = &y; 

  cout<<"\nMemory address : "<<ptr_x<< "| Value : "<<*ptr_x;  
  cout<<"\nMemory address : "<<ptr_y<< "| Value : "<<*ptr_y;    
 return 0;
}