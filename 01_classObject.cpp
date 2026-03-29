#include<iostream>
using namespace std;

class Student{

    public:
    //Properties
    string name = "Amar Kushwaha";
    int age = 18;
    char Grade = 'A';
};

int main() {
    Student s1; //Create Object

    cout<< "Student Name: " << s1.name << endl;
    cout<< "Student Age: " << s1.age << endl;
    cout << "Grade: " << s1.Grade << endl;

    Student s2;

    s2.name = "Rohan";
    s2.age = 19;
    s2.Grade = 'B';

    cout<< "Student Name: " << s2.name << endl;
    cout<< "Student Age: " << s2.age << endl;
    cout << "Grade: " << s2.Grade << endl;
}