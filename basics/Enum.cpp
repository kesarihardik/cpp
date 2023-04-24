#include<iostream>
using namespace std;

//enum is user defined data types that consists of integral constants.

enum vowels { a, e, i , o , u};
enum season {spring = 100, summer = 30 , winter = 50};

int main(){
  vowels v = a;
  cout<<v <<endl;
  
  season s = summer;
  cout<<s<<endl;

  return 0; 
}