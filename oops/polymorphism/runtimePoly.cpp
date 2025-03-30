#include<iostream>
using namespace std;

//virtual function ensures that correct function is called. It is accessed only through pointers.
//helps to avoid diamond problem.
//can be accessed through pointers. can be friends.
//needs to be defined in base class. redefining optional.

//c++ uses static dispatch(resolves method at compile time)
//In Java , all instance methods are virtual by default. Java uses dynamic dispatch.

//assuming fun is present in both Parent & child
//Parent P = new Child();    P.fun();         ///java will call fun of child class.
//Parent* P = new Child() ;  P.fun();           //c++ will invoke parent class fun

class Feline{
    public:
     virtual void eat(){
        cout<<"I'm eating generic food."<<endl;
      }

      void virtual sound(){    //virtual placed after return type not recommended thought it works.
        cout<<"I make sound."<<endl;
      }
};

class Cat: public Feline{
    public:
      void eat() override{             //override keyword is optional. gives compiler an indication for compile time check.
        cout<<"I'm eating Rat."<<endl;
      }

      void sound() override{
        cout<<"I meow."<<endl;
      }
};

class Tiger: public Feline{
    public:
     void eat() override{
        cout<<"I'm eating Deer."<<endl;
     }

     
     void sound() override{
        cout<<"I roar."<<endl;
      }
};

void makeSound(Feline* feline){             //virutal helps us to make generic makeSound function.
 feline->sound();                          //without virtual it will call parent class sound function.
}

int main(){
 Feline* feline = new Feline;
 feline->eat();

 Cat* cat = new Cat;
 cat->eat();

 Feline* cat2 = new Cat;           
 cat2->eat();                     //calls method of base class if virtual is not used. 

 makeSound(feline);
 makeSound(cat);
 makeSound(cat2);

return 0;                        
}

