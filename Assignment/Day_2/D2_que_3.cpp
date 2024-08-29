// // Q.3 Write a class of  cylinder using following members

// // Data members:
// // 	height,radius,volume
// // member function:
// // cylinder()
// // cylinder(height,radius)
// // setHeight(int h)
// // setRadius(int r)
// // getHeight()
// // getRadius()
// // CalculateVolume();
// // getVolume()

#include<iostream>
using namespace std;

class cylinder
{
    public :
    int height,radius,volume;

    void calculateVolume()
    {
        volume=2*3.14*radius*radius*height;
    }

    cylinder()
    {

    }

    cylinder(int ht, int r)
    {
        this->height=ht;
        this->radius=r;
        calculateVolume();
    }

    void setHeight(int ht)
    {
        height=ht;
        calculateVolume();
        
    }
    void setRadius(int r)
    {
        radius=r;
        calculateVolume();
    }

    int getHeight()
    {
        return height;
    }

    int getRadius()
    {
        return radius;
    }

    int getVolume()
    {
        return volume;
    }

    void displayData()
    {
        cout<<"\n height = "<<height;
        cout<<"\n radius = "<<radius;
        cout<<"\n volume = "<<volume;
    }

};

int main()
{
    cylinder c1;
    cout<<"default constructor: ";
    cout<<"\n height = "<<c1.getHeight()<<"\n radius = "<<c1.getRadius();

    cylinder c2(10,5);
    cout<<"\n parameterized constructor : ";
    cout<<"\n height= "<<c2.getHeight()<<"\n radius = "<<c2.getRadius();
    //cout<<"\n volume of cylinder : ";
    c2.displayData();


    c2.setHeight(10);
    c2.setRadius(5);
    cout<<"\n after setting height and radius : ";
    cout<<"\n height = "<<c2.getHeight()<<"\n radius = "<<c2.getRadius();
    //cout<<"\n volume : ";
    c2.displayData();


    return 0;
}






