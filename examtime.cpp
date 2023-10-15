#include<iostream>
using namespace std;
string checkStudentStatus(int examhour,int examminute,int studenthour,int studentminute)
{
    int hour,min;
    if(examhour>studenthour)
    {
    hour=examhour-studenthour;
    min=examminute-studentminute;
    cout <<"Early\n";
    cout << hour <<":" <<min <<" hours before the start.";
    }

    else if(examhour<studenthour)
    {
    hour=studenthour-examhour;
    min=studentminute-examminute;
    cout <<"Late\n";
    cout << hour <<":" <<min <<" hours late from start.";
    }

     else if(examhour=studenthour)
    {
        cout <<"On Time.";
    }


}
main()
{
    int examhour,examminute,studenthour,studentminute;
    cout <<"Enter Exam Starting Time (hour): ";
    cin >>examhour;
    cout <<"Enter Exam Starting Time (Minutes): ";
    cin >>examminute;
    cout <<"Enter Student hour of arrival: ";
    cin >>studenthour;
    cout <<"Enter Student minutes of arrival: ";
    cin >>studentminute;
    checkStudentStatus(examhour,examminute,studenthour,studentminute);
    }
