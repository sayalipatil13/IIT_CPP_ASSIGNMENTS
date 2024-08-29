// 2> Write a .cpp file having a employee class contains
// empID,empName,empSalary,and two function AcceptData and 
// printDate . and call these function in main()

#include<iostream>
using namespace std;
class Employee
{
    private:

    int empID;
    string empName;
    double empSalary;

    public:

    Employee()
    {
    
    }
    void acceptData()
    {
        cout<<"enter employee ID ";
        cin>>empID;

        cout<<"enter employee name ";
        cin>>empName;

        cout<<"enter employee salary ";
        cin>>empSalary;

    }
    void displayData()
    {
        cout<<empID<<endl;
        cout<< empName<<endl;
        cout<<empSalary<<endl;
    }
};
int main()
{
    Employee e;
    e.acceptData();
    e.displayData();

}