#include<iostream>
using namespace std;
float apartment(string month,int numberOfStays)
{
    float bill,discount;
if(month=="May" || month=="October" )
{
    if(numberOfStays>14)
    {
    bill=numberOfStays*65;
    discount=bill*0.1;
    bill=bill-discount;
    return bill;
    }
    if(numberOfStays<14)
    {
    bill=numberOfStays*65;
    return bill;
    }
}
if(month=="June" || month=="September" )
{
     if(numberOfStays>14)
     {
    bill=numberOfStays*68.70;
    discount=bill*0.20;
    bill=bill-discount;
    return bill;
    }
}
else
{
    bill=numberOfStays*68.70;
    return bill;
}
if(month=="July" || month=="August" )
{
         if(numberOfStays>14)
     {
    bill=numberOfStays*68.70;
    discount=bill*0.20;
    bill=bill-discount;
    return bill;
    }
}
else
{
    bill=numberOfStays*68.70;
    return bill;
}
}
float studio(string month,int numberOfStays)
{
    float bill,discount;
if(month=="May" || month=="October" )
{
    if(numberOfStays>14)
    {
    bill=numberOfStays*50;
    discount=bill*0.3;
    bill=bill-discount;
    return bill;
    }
    if(numberOfStays>7)
    {
    bill=numberOfStays*50;
    discount=bill*0.05;
    bill=bill-discount;
    return bill;
    }
    if(numberOfStays<7)
    {
    bill=numberOfStays*50;
    return bill;
    }
}
if(month=="June" || month=="September" )
{
     if(numberOfStays>14)
    bill=numberOfStays*75.20;
    discount=bill*0.20;
    bill=bill-discount;
    return bill;
}
else
{
    bill=numberOfStays*75.20;
    return bill;
}
if(month=="July" || month=="August" )
{
     
    bill=numberOfStays*76;
    return bill; 
}


}
main()
{
    int numberOfStays;
    string month;
    cout << "Enter the month (May, june, July, August, September, October): ";
    cin  >> month;
    cout << "Enter the number of stays: ";
    cin  >> numberOfStays;
    cout << "Studio: "<<studio(month,numberOfStays) << "$ ";
    cout << "\nApartment: "<<apartment(month,numberOfStays) << "$ " ;
}