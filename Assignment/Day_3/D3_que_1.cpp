//Association->composition

#include<iostream>
using namespace std;

class Engine 
{
    int cc, fuel;
    public : 
    void acceptEngine()
    {
        cout<<"\n enter cc =  ";
        cin>>cc;

        cout<<"\n enter fuel =  ";
        cin>>fuel;
    }

    void printEngine()
    {
        cout<<"\n engine cc = "<<cc<<" \n fuel = "<<fuel;

    }


};

class Car
{
    int price ;
    Engine e1;
    public :
    void acceptCar()
    {
        cout<<"enter car price = ";
        cin>>price;
        e1.acceptEngine();
    }

    void printCar()
    {
        e1.printEngine();
        cout<<" \n enter car price = "<<price;
    }
};

int main()
{
    // Engine e1;
    // e1.acceptEngine();
    // e1.printEngine();
    // cout<<"\n";
    Car c1;
    c1.acceptCar();
    c1.printCar();

    return 0;
}