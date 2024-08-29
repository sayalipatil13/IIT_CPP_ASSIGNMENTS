//default argument
// 4> write a function that has the default values for multiple parameters. 
// Call the function where the parameters will use the default values 
// and where the values will be passed to
//  the function.

#include<iostream>
using namespace std;

void displayMulpara(int empID =13 , string empName = "Sayali", double empSal = 20000.00)
{
    cout<<"employee ID  = " << empID << endl;
    cout<<"employee name = "<< empName<<endl;
    cout<<"employee salary = "<< empSal<<endl;
};

int main()
{
    cout<<"calling the default parameters : "<<endl;
    displayMulpara();
    return 0;
}


