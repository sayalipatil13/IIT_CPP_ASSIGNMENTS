#include<iostream>
#include"complex.h"
using namespace std;

Complex::Complex()
{
    real=2;
    img=1;
}

void Complex:: show()
{
    cout<<"complex number = "<<this->real<<"+j"<<this->img; 
}
