#include<iostream>
using namespace std;

class Animal{
    public:
    string getSound(){
        return "Animal makes sound.";
    }
};

class Dog: public Animal{
   public:
    string getSound(){                       //Overriding method of base class
        return "Dog barks.";
    }
};

class Cat: public Animal{
    public:
    string getSound(){
        return "Cat Meows";
    }
};


int main(){
  Dog D ;
  Cat C;
  cout<<D.getSound()<<endl;
  cout<<C.getSound()<<endl;
  return 0;
}