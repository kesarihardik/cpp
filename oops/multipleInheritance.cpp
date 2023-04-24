#include<iostream>
using namespace std;

class Animal{
  string name ;
  string eat;

  public : 
    string infoAnimal(){
        return "This is an animal.";
    }
};

class Mammal{
  public : 
     string infoMammal(){
        return "This is a mammal.";
     }
};

class Human: public Animal, public Mammal{
    public:
    string infoHuman(){
        return "This is a human.";
    }
};

int main(){
 Human H;
 cout<<H.infoAnimal()+" " + H.infoHuman()+" " +H.infoMammal()<<endl;

return 0;
}