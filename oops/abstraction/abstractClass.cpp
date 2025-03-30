#include <iostream>
using namespace std;

//abstract class - class with concrete and pure virtual method.
//abstract class and interfaces can't be instantiated.
class Car{
    public:
        void makeSound(){           //concrete class
            cout<<"Vroom"<<endl;
        }
    
        virtual void engineType() = 0; //pure virtual method 

        Car(){                  //abstract classes have constructors
            cout<<"Object of car type created."<<endl;
        }
};

class Tesla: public Car{
    public:
        void engineType() override{
            cout<<"Electric engine."<<endl;
        }

        Tesla(){
            cout<<"Object of Tesla type created."<<endl;
        }
};

int main(){
    Car* c = new Tesla();
    c->makeSound();
    c->engineType();

    return 0;
}