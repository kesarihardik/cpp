#include<iostream>
using namespace std;

//enum is user defined data types that consists of integral constants.

enum vowel { a, e, i , o , u};
enum season {spring = 100, summer = 30 , winter = 50};

int main(){
  vowel v = a;
  cout<<v <<" "<<sizeof(v) <<endl;
  
  season s = summer;
  cout<<s<<" "<<sizeof(s)<<endl;

  return 0; 
}