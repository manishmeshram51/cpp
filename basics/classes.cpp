// 6 classes in cpp
#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int age;
    int sal;

    void display(){
        cout<<"Details of emp"<<endl;
        cout<< "name : "<< this->name<<endl;
        cout<<"age : " << this->age<<endl;
        cout<<"nsal : " << this->sal<<endl;
    }
};

int main(){
    Employee emp1;
    emp1.name ="Manish Meshram";
    emp1.age = 22;
    emp1.sal = 840000;
    emp1.display();
    return 0;
}