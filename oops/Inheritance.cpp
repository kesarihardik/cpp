#include<iostream>
using namespace std;

//inheritance - is a relationship
// derivation can be public , private or protected. by default: private
//base class constructor is called first when creating object of child class.

class Shape{
   public:  
     string color = "red" ;

     Shape(){
        cout<<"Inside Shape constructor."<<endl;
     }

    protected:
     double area(){                     //area accessible to only child classes.
        return -1;
     }
};

class Square: public Shape{                  //single - level inheritance . shape -> square
    double side;

    public:      
       Square(double side){
        cout<<"Inside square constructor."<<endl;
        this->side = side;
       }

      double area(){
        return (this->side * this->side);
      }
};

//hierarchical inheritance . shape -> square. shape -> circle

class Circle: Shape{              //private derivation
   double radius;

   public:
    Circle(double radius){
       this->radius = radius;
    }

    double area(int r){
        return 3.14 * r *r;
    }
};

int main(){
   Square s(5) ;
   cout<<s.area();
   cout<<"\n"<<s.color;

}
