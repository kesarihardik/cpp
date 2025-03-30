#include <iostream>
using namespace std;

//function overloading / early binding/ compile time polymorphism
class Sum{
  public:
  static int getSum(int a, int b) {return a+b;}

  static int getSum(int a, int b, int c) {return a+b+c;}
};

int main(){
  Sum sum;
  cout<<sum.getSum(5,6)<<endl;
  cout<<sum.getSum(12,4,12);

  return 0;

}