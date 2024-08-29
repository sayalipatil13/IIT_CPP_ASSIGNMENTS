
// Q1: Menu driven code
// Write a 4 function calculator by using menu driven code
// by taking  choice from user for calculation
// (Use Enum , while loop , switch )

#include<iostream>
using namespace std;

enum calculatorEnum
{
     ADD=1, SUB, MULTI, DIV
};

double add(double a, double b)
{
    return a+b;
}


double subtract(double a, double b)
{
    return a-b;
}

double multiplication(double a, double b)
{
    return a*b;
}

double division(double a, double b)
{
    
    return a/b;
}

int main()
{
    double num1,num2;
    int choice;
    do
    {
        cout<<"\n calculator menu : \n ";
        cout<<"0. exit \n ";
        cout<<"1. Addition \n ";
        cout<<"2. Subtraction \n ";
        cout<<"3. Multiplication \n ";
        cout<<"4. Division \n ";
        cout<<"enter your choice : ";
        cin>>choice;

        if(choice!=0)
        {
            cout<<"enter num1 =  ";
            cin>>num1;
            cout<<"enter num2 =  ";
            cin>>num2;
        }
        int result=0;

        switch(choice)
        {
            case ADD:
            result = add(num1,num2);
            break;

            case SUB : 
            // cout<<"subtraction : "<<subtract(num1,num2);
            result = subtract(num1,num2);
            break;

            case MULTI :
           result = multiplication(num1,num2);
            break;

            case DIV :
            result = division(num1,num2);
            break;

           
        }
        cout<<"\n Result=>"<<result;
    }while(choice!=0);
        return 0;   
}
