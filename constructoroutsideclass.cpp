//12(c)

#include <iostream>
using namespace std;

class student{
   
    int rno;
    char name[50];
    double fee;
    
    
    public:
    student();
    void display();
};

student::student(){
    cout<<"Enter the Roll.no:";
    cin>>rno;
    
    cout<<"Enter the Name:";
    cin>>name;
    
    cout<<"Enter the fees";
    cin>>fee;
}

void student::display()
{
    cout<<rno<<"\n";
    cout<<name<<"\n";
    cout<<fee;
    
}

int main() {
   student registr;
   registr.display();
   
   return 0;
}
