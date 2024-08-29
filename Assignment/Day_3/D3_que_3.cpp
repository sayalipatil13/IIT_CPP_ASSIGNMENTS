#include<iostream>
using namespace std;

class Person
{
    int age;
    string name;
    public :
    Person()
    {
    this->name = "Ravi";
    this->age = 29;
    }

    void printPerson()
    {
       cout<<"\n name = "<< name <<" age = "<<age; 
    }
};

class Employee : public Person
{
    int empId;
    int sal;
    public :
    Employee()
    {
        this->empId = 86390;
        this->sal = 25000;
    }

    void printEmp()
    {
        cout<<"empid = "<<empId<<" sal = "<<sal;
        this->printPerson();
    }

};

int main()
{
    // Person p1;
    // p1.printPerson();

    Employee e1;
    e1.printEmp();
    return 0;
}