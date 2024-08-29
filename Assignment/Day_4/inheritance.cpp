// Question 1:

// Create a cpp class named as Artist having 
// data member 
// 		name , rating (3 ,4) , country 
// member function 
// 		acceptArtistData()
// 		printArtistData()
// 		bool isFamous() --> [if rating is 1/2 then not 	Famous ], [if rating is 3/4 then Famous Artist  ]




// Create a cpp class named as painter derived from Artist  class having 
// data member 
// 		string type [decorative, commercial]
// 		PaintingRate [500 per Painting]
// 		number of Painting.

// member function 
// 		acceptPainterData()
// 		printPainterData()
// 		calcuteTotalIncome()
// Ex( M_F_Husain , 2 ,India,  commercial, 50000, 250)




// Create a cpp class named as singer derived from Artist  class having 
// data member 
// 		number of album 
// 		RatePerSong [1000 per song]
// member function 
// 		acceptsingerData()
// 		printsingerData()
// 		calcuteTotalIncome()
// Ex( Michael Jackson, 4 , American ,  70000, 1350)








#include<iostream>
using namespace std;

class Artist
{
    public :
    string name;
    int rating;
    string country;

    void acceptArtistData()
    {
        cout<<"enter name = ";
        cin>>name;
        
        cout<<"\n enter countryname = ";
        cin>>country;

        cout<<"\n enter rating = ";
        cin>>rating;
    }
    void printArtistData()
    {
        cout<<"\n artist name = "<<name<<"\n rating = "<<rating<<"\n counrty name = "<<country<<endl;
    }
    bool isFamous()
    {
        // if(rating <=2)
        // {
        //     return false;
        // }
        // else if(rating >=3 && rating <=5)
        // {
        //     return true;
        // }
        return (rating >=3);
    }
};

class Painter : public Artist
{
    public :

    string type;
    int paintingRate;
    int noOfPainting;
    void acceptPainterData()
    {
        cout<<"\n enter type of painting : ";
        cin>>type;

        cout<<"\n enter number of painting : ";
        cin>>noOfPainting;

        cout<<"\n enter painting rate : ";
        cin>>paintingRate;
    }

    void printPainterData()
    {
        cout<<"\n type of painting : "<<type;
        cout<<"\n number of painting : "<<noOfPainting;
        cout<<"\n painting rate : "<<paintingRate;
    }

    void calcuteTotalIncome()
    {
        cout<<"\n total income = "<<noOfPainting*paintingRate;
    }

};

class Singer : public Artist
{
    public : 

    int noOfAlbum;
    int ratePerPerson;
    void acceptsingerData()
    {
        cout<<"\n enter number of album = ";
        cin>>noOfAlbum;

        cout<<"\n enter ratePerPerson = ";
        cin>>ratePerPerson;

    }
    void printsingerData()
    {
        cout<<"\n number of album = "<<noOfAlbum;
        cout<<"\n rateperperson = "<<ratePerPerson;
    }
    void calcuteTotalIncome()
    {
        cout<<"\n total income = "<<noOfAlbum*ratePerPerson<<endl;
    }


};
int main()
{
    Artist ar;
    ar.acceptArtistData();
    ar.printArtistData();
    bool result;
    
    if( ar.isFamous()==true)
    {
        cout<<"\n this artist is famous !";
    }
    else 
    {
        cout<<"\n this artist is not famous !";
    }

    Painter p;
    p.acceptPainterData();
    p.printPainterData();
    p.calcuteTotalIncome();

    //cout<<"\n"<< "( "<<" "<<p.name<<" , "<<p.rating<<" , "<<p.country<<" , "<<p.type<<" , "<<p.noOfPainting <<" , "<<p.paintingRate<<")";

    
    Singer s;
    s.acceptsingerData();
    s.printsingerData();
    s.calcuteTotalIncome();
   
    //cout<<"\n"<< " ( "<<" "<<s.name<<" , "<<s.rating<<" , "<<s.country<<" , "<<s.noOfAlbum<<" , "<<s.ratePerPerson <<")";

    return 0;
}