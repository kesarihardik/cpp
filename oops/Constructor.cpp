#include <iostream>
using namespace std;

//constructor - funct called when obj is instantiated.
//Types - default, parameterized, non parameterized.
//constructor has no return type. same name as function. can be overloaded.  
//destructor can be only one. can't be overloaded. has no parameters. no return type
//destructor addressed can't be accessed.
//destructor cant be static or const or private/protected.

class Dog{
    string name;
    int age;

    public : 
        Dog(string name, int age){
            cout<<"\nInside parameterized constructor.";
        this->name=name;
        this->age = age;        
       }

       Dog(){
        cout<<"\nInside no params constructor.";
       }


       ~Dog(){
        cout<<"\nInside destructor.";
       }

    
      string getName(){
        return this->name;
      }

      int getAge(){
        return this->age;
      }
};


int main(){
    Dog* d1 = new Dog();                              //new keyword returns reference
    Dog d2("Preeti",5);  
    // cout<< d2.getAge()<<endl;

    Dog d3 = d2;                               //Unlike java, c++ has default copy constructor
    cout<<"\n"<<d3.getName()<<"\t"<<d3.getAge()<<endl;
   return 0;
}