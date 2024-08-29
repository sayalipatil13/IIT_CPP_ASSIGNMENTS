#include "../include/part.h";
#include<iostream>
using namespace std;


Part::Part()
{
    desc = "";
    rate = 0;
}
 Part::Part(const string& desc, double rate)
 {
    this->desc=desc;
    this->rate=rate;

 }

 string Part::get_desc() 
 {
    return this->desc;
 }

  void Part::set_desc(const string& desc)
 {
    this->desc=desc;
 }

 double Part::get_rate()
 {
    return this->rate;
 }

 void Part::set_rate(double)
 {
    this->rate=rate;
 }

 void Part:: input()
 {
    cout<<"\n enter part description = "<<endl;
    cin>>desc;
    cout<<"\n enter part rate = ";
    cin>>rate;
 }

 void Part::part_Display()
 {
    cout<<"\n part description = "<<desc;
    cout<<"\n part rate = "<<rate;
 }
