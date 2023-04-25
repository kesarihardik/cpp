#include<iostream>
using namespace std;

//virtual function ensures that correct function is called. It is accessed only through pointers.
//helps to avoid diamond problem.
//can be accessed through pointers. can be friends.
//needs to be defined in base class. redefining optional.
//In Java , appropriate method is called accordingly

//assuming fun is present in both Parent & child
//Parent P = new Child();    P.fun();         ///java will call fun of child class.
//Parent* P = new Child() ;  P.fun();           //c++ will invoke parent class fun

class Feline{
    public:
     virtual void eat(){
        cout<<"I'm eating generic food."<<endl;
      }

      virtual void sound(){
        cout<<"I make sound."<<endl;
      }
};

class Cat: public Feline{
    public:
      void eat(){
        cout<<"I'm eating Rat."<<endl;
      }

      
       void sound(){
        cout<<"I meow."<<endl;
      }
};

class Tiger: public Feline{
    public:
     void eat(){
        cout<<"I'm eating Deer."<<endl;
     }

     
     void sound(){
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

