#include<iostream>
using namespace std;

class Part
{
    public :

    string desc;
    double rate;

    Part()
    {
         
    }

    Part(string ds, double rt)
    {
        desc = ds;
        rate = rt;
    }

    string get_Desc()
    {
        return desc;
    }

    double get_Rate()
    {
        return rate;
    }

    void set_Desc( string ds)
    {
        desc=ds;
    }

    void set_Rate(double rt)
    {
        rate=rt;
    }


};

int main()
{
    Part p1;
    cout<<"default constrcutor : "<<endl;
    cout<<"\n Description = "<<p1.get_Desc()<<"\n rate = "<<p1.get_Rate()<<endl;

    Part p2("gear", 500);
    cout<<"\n parameterized constructor : "<<endl;
    cout<<"\n description = "<<p2.get_Desc()<<"\n rate = "<<p2.get_Rate()<<endl;

    p2.set_Desc("break");
    p2.set_Rate(500);
    cout<<"\n desc = "<<p2.get_Desc()<<"\n rate = "<<p2.get_Rate();

    return 0;
}