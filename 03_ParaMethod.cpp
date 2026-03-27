#include<iostream>
using namespace std;

class calculate{
    public:
    int num1, num2;
    
    void add(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }

    void display(){
        int result = num1 + num2;
        cout<< "Sum: " << result <<endl;
    }
};

int main(){
    calculate c;
    c.add(100, 20);
    c.display();
}