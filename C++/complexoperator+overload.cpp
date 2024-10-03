#include <iostream>
using namespace std;
//to add two complex number
class Complex {
    float real;
    float img;
    public:
    Complex(){}
    Complex(float a,float b){

        real=a;
        img=b;

    }
     friend Complex operator+(Complex a,Complex b);
    
    void display(){
        cout<<real<<"+i"<<img;
        cout<<endl;
    }
};
Complex operator+(Complex a,Complex b){
         Complex T;
         T.real=a.real+b.real;
         T.img=a.img+b.img;
         return T;
    }

int main() {
    
   
    Complex S;
    Complex C1(1.5,2.5);
    Complex C2(1.5,2.5);
    S=C1+C2;
    S.display();



    
}
