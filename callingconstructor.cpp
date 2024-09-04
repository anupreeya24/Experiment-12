//12(a)

#include <iostream>
using namespace std;

class date {
    int d;
    int m;
    int y;
    
    public:
    date()
    {
        cout<<"Constructor called"<<endl;
        d=4;
        m=9;
        y=2024;
    }
    
    void output(){
        cout<<d<<"/";
        cout<<m<<"/";
        cout<<y;
    }
};

int main() {
    date today;
    today.output();
    return 0;
}

/* OUTPUT
Constructor called
4/9/2024 */
