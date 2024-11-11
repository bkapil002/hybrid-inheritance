#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    void setPerson(string n , int a){
        name = n;
        age = a;
    };

    void dispalyPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class student : virtual public Person{
    public:
    int rollnumber;

    void setStudentDetails( int r){
        rollnumber = r;
    }

    void displayStudent(){
        cout<<"Rollnumber: " <<rollnumber<<endl;
    }
};

class Teacher : virtual public Person{
    public:

    string subject;

    void setTeacher( string sub ){
        subject = sub;
    }

    void displayTeacher(){
        cout<<"Subject: "<<subject<<endl;
    }
};

class classes : public student , public Teacher{
    public:

    string className;

    void setClassName( string c ){
        className = c;
    }

    void displayClasses(){
        dispalyPerson();
        displayStudent();
        displayTeacher();
        cout<<"className: "<<className<<endl;
    }
};
int main(){
    classes c;

    c.setPerson("brahm" , 55);
    c.setStudentDetails(22);
    c.setTeacher("math");
    c.setClassName("string");

    c.displayClasses();
    return 0; 
}