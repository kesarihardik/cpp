#include<iostream>
using namespace std;

class A{
    public:
        void foo(){
            cout<<" A::foo() called."<<endl;
        }

        virtual void moo(){
            cout<<" A::moo() called "<<endl;
        }
};

 //virtual ensure one copy of base class is created unlike non-virtual inheritance where each object has its own copy.

class B: virtual public A{ 
    public:
        void moo() override{
            cout<<" B::moo() called "<<endl;
        }
};

class C: virtual public A{
    public:
        void moo() override{
            cout<<" C::moo() called"<<endl;
        }
};

class D: public B, public C{
    public:
        void moo() override{
            B::moo();            //explicit ambiguity resolution
        }
};

int main(){
    A* a = new D();      
    a->foo();
    a->moo();
    return 0;
}