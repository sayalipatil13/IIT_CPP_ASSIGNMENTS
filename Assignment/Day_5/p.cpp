#include<iostream>
using namespace std;
class Part
{
    private:
    string desc;
    double rate;

    public:

    Part()
    {

    }

    Part(string desc, double rate)
    {
        this->desc=desc;
        this->rate=rate;
    }

    string get_desc()
     {
        return desc;

     }
     double get_rate()
     {
        return rate;

     }
     void input()
     {
        cout<<"Enter part description:";
        cin>>desc;
        cout<<"Enter part rate:";
        cin>>rate;

     }
     
     void set_desc(const string&desc,double rate)
     {
        this->desc=desc;

     }
     void set_rate(double rate)
     {
        this->rate=rate;

     }

     


};

int main()
{
//     Part p1;
//     cout<<"\n"<<p1.get_desc();
//     cout<<"\n"<<p1.get_rate();

    Part p2("gear",1000);
    cout<<"\n "<<p2.get_desc();
    cout<<"\n "<<p2.get_rate();
    
    p2.set_desc("break",1000);
    p2.set_rate(1000);
    cout<<"\n description = "<<p2.get_desc()<<"\n rate = "<<p2.get_rate();

    return 0;

}