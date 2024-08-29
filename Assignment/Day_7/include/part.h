#ifndef PART_H
#define PART_H
#include<iostream>
#include<string.h>
using namespace std;

class Part
{
    private :

    string desc;
    double rate;

    Part();

    Part(const string& desc, double rate);

    void input();
    

    void part_Display();
    

    string get_desc();

    double get_rate();

    void set_desc(const string& desc);

    void set_rate(double rate);
};
#endif