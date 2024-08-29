#ifndef MAINTENANCE;
#define MAINTENANCE;
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

    Maintenance();
    Maintenance(const string& desc, double labour_charges);
    double get_labor_charges();
    void set_labor_charges();
    void input();
    void add_part(const Part& new_part);
    void display();
    double price();
    list<Part>&get_part_list();
};
#endif