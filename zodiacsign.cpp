#include<iostream>
using namespace std;
string findZodiacSign(int day,string month)
{
    string sign;
if((month=="March" && day>=21 && day<=31) || (month=="April" && day>=1 && day<=19))
{
    sign="Aries";
    return sign;
}
if((month=="April" && day>=20 && day<=30) || (month=="May" && day>=1 && day<=20))
{
    sign="Taurus";
    return sign;
}
if((month=="May" && day>=21 && day<=31) || (month=="June" && day>=1 && day<=20))
{
    sign="Gemini";
    return sign;
}
if((month=="June" && day>=21 && day<=30) || (month=="July" && day>=1 && day<=22))
{
    sign="Cancer";
    return sign;
}
if((month=="July" && day>=23 && day<=31) || (month=="August" && day>=1 && day<=22))
{
    sign="Leo";
    return sign;
}
if((month=="August" && day>=23 && day<=30) || (month=="October" && day>=1 && day<=22))
{
    sign="Virgo";
    return sign;
}
if((month=="September" && day>=23 && day<=31) || (month=="October" && day>=1 && day<=22))
{
    sign="Scorpio";
    return sign;
}
if((month=="November" && day>=22 && day<=30) || (month=="December" && day>=1 && day<=21))
{
    sign="Sagittarius";
    return sign;
}
if((month=="December" && day>=22 && day<=31) || (month=="January" && day>=1 && day<=19))
{
    sign="Capricorn";
    return sign;
}
if((month=="January" && day>=20 && day<=31) || (month=="February" && day>=1 && day<=18))
{
    sign="Auarius";
    return sign;
}
}
main()
{
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >>month;
    cout <<"Zodiac Sign: " <<findZodiacSign(day,month);
}

