#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary; // data hiding
public:
// non-parameterise constructor
    Teacher(){
        // it is already there as default
        // but if you want to assign some values you can made it and write your things
        // e.g
        dept="Engineering Sciences";
        cout<<"Hi,welcome to our school"<<endl;
    }
    // properties //attributes
    string name;
    string dept;
    string subject;
    // double salary;

    // parameterise constructor
    Teacher(string name,string dept,string subject){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
    }

    // copy constructor
    Teacher (Teacher &cp){ //"Teacher &cp" this is pass by reference 
        cout<<"I am a custom copy constructor"<<endl;
        this->name=cp.name;
        this->dept=cp.dept;
        this->subject=cp.subject;
    }

    // methods // member function
    void changedept(string newdept){
        dept = newdept;
    }

    // setter
    double setSalary(double s){
        salary=s;
    }

    // getter
    double getSalary(){
        cout<<"salary      :"<<salary<<endl;
    }

    void getInfo(){
    cout<<"Name        :"<<name<<endl;
    cout<<"Department  :"<<dept<<endl;
    cout<<"Subject     :"<<subject<<endl;
    // cout<<"Salary      :"<<t1.salary<<endl; private cannot be access
    }

};
int main(){
    cout<<"The description on faculty:"<<endl;

    // Without parameterise constructor
    // Teacher t1;
    // t1.name="Bruce Wayne";
    // // t1.dept="Computer Science";
    // t1.subject="C++";
    // // t1.salary=70000; private cannot be access but access by set and get
    // // t1.changedept("AIDS");
    // t1.setSalary(100000);
    // t1.getSalary();

    // with parameterise constructor
    Teacher t1("Nihal","ComputerScience","DSA");
    Teacher t2(t1); //Default copy constructor before making custom copy cobtructor
    t2.getInfo();


    return 0;
}