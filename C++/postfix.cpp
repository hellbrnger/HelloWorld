#include <iostream>
using namespace std;

class Unary {
    int index;
    public:
    Unary(){
        index=0;
    }
    Unary(int i){
        index=i;
    }
    Unary operator++(int){
        
        return index++;
    }
    void show(){
        cout<<index<<endl;
    }
    
    
   
    
};

//operator overloading of c++
int main() {
    Unary c;
    c.show();
    c++;
    c.show();
    c++;
    c.show();
    
}
