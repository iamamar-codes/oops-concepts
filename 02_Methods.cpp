#include<iostream>
using namespace std;

class Person{
    public:
     void eat(){
        cout<<"I am Eating"<<endl;
    }

    void run(){
        cout<<"I am Runing"<<endl;
    }
};
class Animal{
    public:
    void sleep(){
        cout<<"Animal is Sleeping"<<endl;
    }
};

int main(){
    
    Person p1;
    p1.eat();
    p1.run();

    Animal a1;
    a1.sleep();
}