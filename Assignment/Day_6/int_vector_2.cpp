#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    cout<<"element at "<<i<<"-"<<v[i]<<endl;
}
// int main()
// {
//     vector<int> v1;
//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     v1.push_back(50);
//     v1.push_back(60);
//     display(v1);

//     v1.insert(v1.begin() ,100);
//     v1.insert(v1.begin()+2,200);
//     for(int i=0;i<v1.size();i++)
//     cout<<"\n after adding elements = "<<v1[i]<<endl;
//     display(v1);
//     return 0;
    
// }

int main()
{
    vector<int> v2;

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(50);
    v2.push_back(60);
    display(v2);

    v2.erase(v2.begin());
    v2.erase(v2.begin()+2);
    for(int i=0;i<v2.size();i++)
    cout<<"\n after erasing element = "<<v2[i]<<endl;
    display(v2);
    return 0;
    
}

// int main()
// {
//     vector<int> v3;
//     v3.push_back(10);
//     v3.push_back(20);
//     v3.push_back(30);
//     v3.push_back(40);
//     v3.push_back(50);
//     v3.push_back(60);

//     v3.pop_back();
//     v3.pop_back();
//     cout<<"\n after removing elements = "<<endl;
//     display(v3);
//     return 0;
// }