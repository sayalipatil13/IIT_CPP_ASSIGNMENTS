#include<iostream>
#include<vector>
using namespace std;

class Person
{
    private :
    string name;

    public :
    void acceptName()
    {
        cout<<"enter name = ";
        cin>>name;
    }

    void displayName()
    {
        cout<<"\n Name = "<<name<<endl;
    }

};

    int menu()
    {
        int choice;
        cout<<"\n 0.Exit";
        cout<<"\n 1.add person";
        cout<<"\n 2.display all person";
        cout<<"\n enter choice = "<<endl;
        cin>>choice;
        return choice;
    }


int main()
{
    int choice;
    vector<Person *> personlist;
    Person *ptr=NULL;
    while((choice = menu())!=0 )
    {
        switch(choice)
        {
        case 1 :
        ptr = new Person();
        ptr->acceptName();
        personlist.push_back(ptr);

        break;

        case 2 :
        for(int i=0;i<personlist.size();i++)
        personlist[i]->displayName();
        break;

        default :
        cout<<"\n wrong choice !";
        }
    }
    for(int i=0;i<personlist.size();i++)
    delete personlist[i];
    return 0;
}

int main1()
{
    vector<Person *> personlist;
    Person *ptr= NULL;
    
    ptr = new Person();
    ptr->acceptName();
    personlist.push_back(ptr);

    ptr = new Person();
    ptr->acceptName();
    personlist.push_back(ptr);

    for(int i=0;i<personlist.size();i++)
    personlist[i]->displayName();

    for(int i=0;i<personlist.size();i++)
    {
        delete personlist[i];
    }

    return 0;
}