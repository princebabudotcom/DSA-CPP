#include <iostream>
#include <string>
using namespace std;


class Teacher {
 // properties

 private :
 double salary;
   
    public :
     string name;
    string dept;
    string subject;
    // non-parameterized
    Teacher() {
       cout << "Non paraterized constructor " << endl; 
    }

    //parameterized
    Teacher(string name , string subject , double salary , string dept){
       this->name = name;
       this->dept = dept;
       this->subject = subject;
       this->salary = salary;
    }
   
    

    // methods ??// members

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double newSalary){
        salary = newSalary;
    }

    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Department : " << dept << endl;
        cout << "salary : " << getSalary() << endl;
        cout << "Subject : " << subject << endl;
    }

};


class Student {


     private : 
    double marks;



    public : 
    string name;
    string rollNo;
    string age;


    double getMarks (){
        return marks;
    }

    void setMarks(double newMarks){
        marks = newMarks;
    }

};

class Account {

    private :
    double balances;
    string password;

    public : 
    string accountId;
    string username;
    
};

int main(){

    //  Teacher t1; // create object
    //   Teacher t2; // create object
    //  Teacher t2;
    //  Teacher t3;

    Teacher t1("prince babu" , "dsa" , 10000 , "Computer Science");

    // t1.name = "Prince Babu";
    // t1.dept = "BCA";
    // t1.subject = "C++";
    // t1.setSalary(25000);
    // cout << t1.getSalary() << endl;

    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // cout << t1.getSalary() << endl;
    // cout << t1.subject << endl;

    t1.getInfo();


    // student
    Student s1;
    s1.name= "Prince babu";
    s1.age = 20;
    s1.rollNo = "251117002251";
    s1.setMarks(10000);
    s1.getMarks();

    cout << s1.rollNo << endl;

    return 0;
}