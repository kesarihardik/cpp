#include<iostream>
using namespace std;

//enum is user defined data types that consists of integral constants.

enum Vowel { A, E, I , O , U};
enum Season {SRPING = 100, SUMMER = 30 , WINTER = 50};
// enum Vehicle{Car="car"};        // c++ enums can only have itegral values                     

int main(){
  Vowel v = Vowel::A;
  cout<<v <<" "<<sizeof(v) <<endl;
  
  Season s = Season::SUMMER;
  cout<<s<<" "<<sizeof(s)<<endl;

  return 0; 
}