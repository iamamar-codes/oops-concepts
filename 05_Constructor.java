/*Constuctor: is a "special method" used to "Initalize Objects" 
- same as of class name 
- Does not have any return type
- called automaticaly when an object is created*/

class Student {

    String name;
    int rollnumber;

    public Student(String n, int r){
        name = n;
        rollnumber = r;
        System.out.println("Student name is: "+ n);
        System.out.println("Student roll number is: "+ r);
    }

    public Student(int no){                                                       //Parameterized Constructor
        System.out.println("Number is: "+ no);
    }
    // public Student(){                                                         //Non-Parameterized constructor
    //     System.out.println("I am Non-Parameterized constructor");
    // }

    public static void main(String[] args) {
       // Student std = new Student("Amar", 101);
        new Student("Amar", 101);
        new Student(100);
    }

}

