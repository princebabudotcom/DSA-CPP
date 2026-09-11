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

};

int main(){

     Teacher t1;
    //  Teacher t2;
    //  Teacher t3;

    t1.name = "Prince Babu";
    t1.dept = "BCA";
    t1.subject = "C++";
    t1.setSalary(25000);
    cout << t1.getSalary() << endl;

    cout << t1.name << endl;

    return 0;
}