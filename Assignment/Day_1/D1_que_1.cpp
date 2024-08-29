// Question 1:

// Define a class in C++ for to save time 
// struct members

// Time class
// int hr,min,sec
// initTime()    ->0:0:0
// acceptTime()
// DisplayTime()
// increamentTimeBy1Min()
#include<iostream>
using namespace std;
class Time{
   private:
   int hr,min,sec;
   public:
    Time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    void initTime()
    {
        hr=0;
        min=0;
        sec=0;
    }
    void acceptTime()
    {
        cout<<"enter hour " <<" = ";
        cin>>hr;
        cout<<"enter min  " <<" = ";
        cin>>min;
        cout<<"enter sec  " <<" = ";
        cin>>sec;
    }
    void displayTime() 
    {
     cout<<"\n Time = "<<hr<<":"<<min<<":"<<sec;

    }
    void increamentTimeBy1Min()
    {
        if(sec>59){
            min=min+1;
        }

    }

};
int main()
{
    Time t;
    t.acceptTime();
    t.displayTime();
    t.increamentTimeBy1Min();
    t.displayTime();
}