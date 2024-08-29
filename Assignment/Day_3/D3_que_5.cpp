Question 2: 
create Address class having data members cityName ,stateName , Pincode and following functions

	AcceptAddress ();
	PrintAddress ();

Create a class Student having  data member as name , courseName , Home-address and following functions.
	
	AcceptStudentData();
	PrintStudentData();


#include<iostream>
using namespace std;
class Address
{
    public : 
    string cityName;
    string stateName;
    int Pincode;
    Address()
    {

    }
    void accpetAddress()
    {
        cout<<"enter cityname = ";
        cin>>cityName;

        cout<<"enter stateName = ";
        cin>>stateName;

        cout<<"enter pincode = ";
        cin>>Pincode;
    }
    void printAddress()
    {
        cout<<"\n cityname = "<<cityName<<"\nstatename =  "<<stateName<<"\n pincode =  "<<Pincode;
    }
};

class Student
{
    public : 
    string nm;
    string cnm;
    Address Hm_adrs;

    Student()
    {

    }

    void acceptStudentData()
    {
        cout<<"\n enter student name = ";
        cin>>nm;
        cout<<"\n enter coursename = ";
        cin>>cnm;
        cout<<"\n enter Home adrress : ";
        Hm_adrs.accpetAddress();
    }

    void printStudentData()
    {
        cout<<"\n student name = "<<nm<<"\n course_name = "<<cnm<<"\n home Adrress : ";
        Hm_adrs.printAddress();
    }
};

int main()
{
    // Address ad1 ;
    // ad1.accpetAddress();
    // ad1.printAddress();
    Student st;
    st.acceptStudentData();
    st.printStudentData();

    return 0;
}

