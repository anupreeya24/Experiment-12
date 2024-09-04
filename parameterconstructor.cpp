#include <iostream>
using namespace std;

class pconstruct{
   
    int a,b;
    
    public:

     pconstruct(int m, int n)
     {
         a=m;
         b=n;
     }
     
     void putdata(){
         cout<<"a="<<a<<endl<<"b="<<b;
         
     }
};
int main() {
    pconstruct numbers(10,20);
    numbers.putdata();
    
   
    return 0;
}

//output
//a=10
//b=20
