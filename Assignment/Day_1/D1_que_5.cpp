//inline functiom
// 5> Write a inline function to calculate area of triangle.
// Input base and Height from user and print the result.

#include<iostream>
using namespace std;

inline float CalculateArea(float base , float height)
{
    return 0.5f * base * height;
}
int main()
{
    float base, height;
    cout<<" enter the base of traingle = ";
    cin>>base;

    cout<<" enter the height of the traingle = ";
    cin>>height;
    float area = CalculateArea(base,height);
    cout<<"area of the traingle = "<< area<<endl;
    return 0;
}

