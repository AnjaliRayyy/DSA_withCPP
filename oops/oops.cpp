#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    string name;
    int roll;
    int age;
    double* cgpaPtr;

    //Constructor
    Student(){
        cout<<"Hi i'm a constructor"<<endl;
    }

    // Parameterized constructor ---> shallow copy by default
    Student(string name,int roll,int age,double cgpa){
        this->name=name;
        this->roll=roll;
        this->age=age;
        this->cgpaPtr=new double;
        *(this->cgpaPtr)=cgpa;
    }

    // Copy constructor ---> deep copy
    Student(Student &obj){
        this->name=obj.name;
        this->roll=obj.roll;
        this->age=obj.age;
        this->cgpaPtr=new double;
        *(this->cgpaPtr)=*(obj.cgpaPtr);
    }

    // Destructor
    ~Student(){
        cout<<"Hi, I delete everything\n";
        delete cgpaPtr;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Cgpa : "<<*cgpaPtr<<endl;
    }
};

int main() {
    Student s1("Anjali",1240136,20,9.2);
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr)=8.8;
    s1.getInfo();
    s2.getInfo();
    return 0;
}