#include<iostream>
using namespace std;

class Student{
    public:
    string name = "Amar Kushwaha";
    int age = 18;
    char Grade = 'A';
};

int main() {
    Student s1;

    cout<< "Student Name: " << s1.name << endl;
    cout<< "Student Age: " << s1.age << endl;
    cout << "Grade: " << s1.Grade << endl;
}