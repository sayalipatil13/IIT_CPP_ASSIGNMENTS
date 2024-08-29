// create TDate class having data member day ,month , year
// and following functions

// TDate();
// TDate(int day,int month,int year);
// AcceptDate();
// PrintDate_dd-mm-yyyy();    //Ex = 2-5-2022
// PrintDate_dd-month-yyyy(); //Ex = 2-May-2022
// bool ValidateDate();

#include<iostream>
using namespace std;

class TDate
{
    private:
    int day , month, year;

    public :

    TDate()
    {
        
    }
    
    void acceptDate()
    {
        cout<<"enter date : "<<endl;
        cin>>day;

        cout<<"enter month : "<<endl;
        cin>>month;

        cout<<"enter year : "<<endl;
        cin>>year;

    }

    void printDate_dd_mm_yy()
    {
        cout<<" "<<day<<"-"<<" "<<month<<"-"<<" "<<year<<endl;
    }

    void printDate_dd_month_yy()
    {
        cout<<"enter month : ";

        switch(month)
        {
            case 1 : 
            cout<<"January"<<endl;
            break;

            case 2 :
            cout<<"FEB"<<endl;
            break;

            case 3 :
            cout<<"MARCH"<<endl;
            break;

            case 4 :
            cout<<"APRIL"<<endl;
            break;

            case 5 :
            cout<<"MAY"<<endl;
            break;

            case 6 :
            cout<<"JUNE"<<endl;
            break;

            case 7 :
            cout<<"JULY"<<endl;
            break;

            case 8 :
            cout<<"AUGUST"<<endl;
            break;

            case 9 :
            cout<<"SEPTEMBER"<<endl;
            break;

            case 10 :
            cout<<"OCTOBER"<<endl;
            break;

            case 11 :
            cout<<"NOVEMBER"<<endl;
            break;

            case 12 :
            cout<<"DECEMBER"<<endl;
            break;

        }
        cout<<" "<<day<<"-"<<month<<"-"<<year<<endl;
    }

    bool validateDate()
    {
        if(year<1)
        {
            return false;
        }

        if(month <1 || month >12)
        {
            return false;
        }


    }
};

int main()
{
    TDate dt;
    dt.acceptDate();
    dt.printDate_dd_mm_yy();
    dt.printDate_dd_month_yy();
    //dt.validateDate();
    return 0;

}
