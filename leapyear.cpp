#include <iostream>
using namespace std;
float calculatevolleyballgames(string year,int holidays,int weekends)
{
    float totalholidays,totalweekends,normalyear,leapyear;
     totalholidays= holidays * 0.66;
    totalweekends = (48 - weekends)*0.75;
    normalyear =  totalholidays + totalweekends + weekends;
    leapyear = (normalyear*2) * 0.15;
    if(year=="Leap")
    return leapyear;
    if(year=="Normal")
    return normalyear;
}
main()
{   
    int holidays,weekends;
    string year;
    cout <<"Enter year type: ";
    cin >> year;
    cout <<"Enter number of hoidays: ";
    cin >>holidays;
    cout <<"Enter number of weekends: ";
    cin >>weekends;
    cout<<calculatevolleyballgames(year,holidays,weekends) ;
}