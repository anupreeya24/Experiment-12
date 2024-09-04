#include <iostream>
using namespace std;

class construct{
    public:
    int a,b;
    
    //Default constructor
     construct()
     {
         a=10;
         b=20;
     }
     
     void add(){
         cout<<a+b;
         
     }
};
int main() {
    construct con;
    con.add();
    
   
    return 0;
}

//output
//30
