Question 1: create TDate class having data members day ,month , year and following functions

	AcceptDate();
	PrintDate();

Create a class Person having  data member as name , age , date_of_birth and following functions.

	AcceptPersonData();
	PrintPersonData();

#include<iostream>
using namespace std;

class TDate
{
    public :
    int day;
    int month;
    int year;
    TDate()
    {

    }
    void acceptData()
    {
        cout<<"enter day = ";
        cin>>day;
        cout<<"enter month = ";
        cin>>month;
        cout<<"enter year = ";
        cin>>year;
    }
    void printData()
    {
        cout<<""<<day<<"-"<<""<<month<<"-"<<""<<year;
    }
};

class Person 
{
    public :
    string name;
    int age;
    TDate DOB;

    Person()
    {

    }
    void acceptPersonData()
    {
        cout<<"\n enter name = ";
        cin>>name;

        cout<<"\n age = ";
        cin>>age;

        DOB.acceptData();

    }
    void printData()
    {
        cout<<"\n name of person = "<<name;
        cout<<"\n age of person = "<<age;
        cout<<"DOB = ";
        DOB.printData();
    }
};


int main()
{
    Person p1;
    p1.acceptPersonData();
    p1.printData();
    return 0;

}