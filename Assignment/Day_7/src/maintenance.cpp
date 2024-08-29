#include "../include/maintenance.h";
#include <iostream>
#include<string.h>
#include<list>
using namespace std;
class Part{

};
class Maintenance
{
    private :
    double labour_charges;
    list <Part> part_list;

    Maintenance::Maintenance();
    Maintenance::Maintenance(const string& desc, double labour_charges);
    double Maintenance::get_labor_charges()
    {
        return labour_charges;
    }
    void Maintenance::set_labor_charges(double labour_charges)
    {
        this->labour_charges=labour_charges;
    }
    void Maintenance::input()
    {
        cout<<"enter the labour charges = ";
        cin>>labour_charges;
    }
    void Maintenance:: add_part()
    {
        int choice = 0;
        do
        {
            Part part;
            part.input();
            part_list.push_back(part);
            cout<<"\n do you want to add more parts ? ";
            cout<<"\n press 1. to add more or any number to cancle parts = ";
            cin>>choice;
            
        } while (choice==1);
        

    }
    void Maintenance::display();
    double Maintenance:: price()
    {
        double price = 0;
        for (list<Part>::const_iterator it = part_list.begin(); it != part_list.end(); ++it)
        {
            price = price + it->get_rate();
        }
        return price;
    }
    list<Part>& get_part_list()
    {
        return part_list;
    }
};
