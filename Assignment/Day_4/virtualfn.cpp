#include<iostream>
using namespace std;

class Shape
{
    public :
    virtual void calArea()
    {
        cout<<"===Shape::calarea"<<endl;
    }

    virtual void input()
    {
        cout<<"===shape::input"<<endl;
    }

};

class Rect : public Shape
{
    public :

    int length,breadth;

    void input()
    {
        cout<<"\n Enter length = ";
        cin>>length;
        cout<<"\n enter breadth = ";
        cin>>breadth;
    }

    void calArea()
    {
        cout<<"\n area of rectngle = "<<length*breadth;
    }

};

class Circle : public Shape
{
    public :
    int r;

    void input()
    {
        cout<<"\n enter radius = ";
        cin>>r;
    }
    void calArea()
    {
        cout<<"\n area of circle = "<<3.14*r*r;
    }
};

int main()
{
    Shape *sptr = NULL;
    Rect r;
    Circle cr;
    int ch;
    do
    {
        cout<<" \n enter 1. Rectangle 2. Cirlce 0. Exit : ";
        cin>>ch;
        switch(ch)
        {
            case 1 :
                sptr=&r;
                break;
            case 2 :    
                sptr=&cr;
                break;
            default : 
            cout<<"please enter right choice ! ";   
        }
        if(sptr!=NULL)
        {
            sptr->input();
            sptr->calArea();
        }
        sptr = NULL;
    } while (ch!=0);
    
//     Shape *sptr=NULL;
//     Rect r;
//     sptr=&r;
//     sptr-> input();
//     sptr->calArea();

    // Shape sp;
    // sp.calArea();
    // sp.input();
    
    // Rect rt;
    // rt.input();
    // rt.calArea();

    // Circle cr;
    // cr.input();
    // cr.calArea();
    return 0;
}