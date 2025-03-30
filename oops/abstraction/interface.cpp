#include <iostream>
using namespace std;


//interface - class with virtual methods, constants, static fields only.
//interface has no instance variabes, no constructor, no destructor
//interface has only public inheritance type 
class A{
    public:        
        static int i;  //only declaration allowed for static fields.
        static const int j = 4;
        static const double k = 4.23;

        virtual void foo() = 0;
        virtual void moo() = 0;
};

int A::i = 5;  //definition and memory allocation
// int A::j = 5;        //error  

class AA: public A{
    public:
        void foo() override{
            cout<<"AA -> foo() called."<<endl;
        }

        void moo() override{
            cout<<"AA -> moo() called."<<endl;
        }
};

class AB: protected A{  //private and protected inheritance types doesn't work with interfaces.
    public:
        void foo() override{
            cout<<"AB -> foo() called."<<endl;
        }

        void moo() override{
            cout<<"AB -> moo() called."<<endl;
        }
};


int main(){
    // A *a = new A();      //interface can't be instantiated
    
    cout<<A::i<<endl;

    A *obj = new AA();
    cout<<obj->i<<endl;
    obj -> foo();

    // A *obj = new AB();    //inaccessible base class

    return 0;
}