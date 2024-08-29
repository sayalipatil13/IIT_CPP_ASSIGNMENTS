//function overloading
// 3) write a function 'Add' which is able to add 
// 3 int value and 1 float value 
// 2 int value and 2 float value ,
// 1 int value and 3 float value,
// 4 int value ,
// 4 float value,

#include<iostream>
using namespace std;

void add(int a, int b, int c , float d)
{
    cout<< " Addition of 3 int value and 1 float value = " << (a+b+c+d)<<endl;
}

void add(int a, int b, float c, float d)
{
    cout<< " Addition of 2 int value and 2 float value = "<<(a+b+c+d)<<endl;
}

void add(int a, float b, float c, float d)
{
    cout<<" additiopn of 1 int and 3 flaot value = " << (a+b+c+d)<<endl;
}

void add(float a, float b, float c, float d)
{
    cout<<" additiopn of float values = "<<(a+b+c+d)<<endl;
}

void add(int a, int b, int c, int d)
{
    cout<<" additiopn of 4 int values values" << (a+b+c+d);
}
int main()
{
    add(10,10,10,12.4f);
    add(10,10,20.2f,20.2f);
    add(10, 20.2f,20.2f, 20.2f);
    add(2.2f,2.2f, 2.2f, 2.2f);
    add(10,10,10,10);

    return 0;
}