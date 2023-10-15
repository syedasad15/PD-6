#include<iostream>
using namespace std;
main()
{
    float bill;
    char stype,type;
    int min;
    cout <<"Enter the service code (R/r for regular, P/p for premium): ";
    cin >>stype;

if(stype=='R'||stype=='r')
{
    cout <<"Enter the number of minutes used: ";
    cin >>min;
    if(stype=='R'||stype=='r' && min>50)
    {
    bill=10;
    min=min-50;
    bill=bill+(min*0.20);
    cout << "Service Type: Regular\n" ;
    cout <<"Amount Due: $" <<bill;
    }

}

    else if(stype=='P'||stype=='p')
    {
    cout <<"Enter time of the call (D/d for day,N/n for night): ";
    cin >>type;
    cout <<"Enter the number of minutes used: ";
    cin >>min; 
    cout << "Service Type: Premium\n" ;
    cout << "Total Minutes Used: "<< min << " minutes\n";
    if(type=='D'||type=='d'&& min>100)
    {
    
    bill=bill+25;
    min=min-100;
    bill=bill+(min*0.10);
    cout <<"Amount Due: $" <<bill;
    }
    if(type=='D'||type=='d'&& min<=100)
    {
    
    bill=25;
    cout <<"Amount Due: $" <<bill;
    }
    if(type=='N'||type=='n'&& min>100)
    {
    
    bill=bill+25;
    min=min-100;
    bill=bill+(min*0.05);
    cout <<"Amount Due: $" <<bill;
    }
    if(type=='N'||type=='n'&& min<=100)
    {
    
    bill=25;
    cout <<"Amount Due: $" <<bill;
    }
    }
    }




