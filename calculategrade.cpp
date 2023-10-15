#include<iostream>
using namespace std;
float average;
float calculateAverage(float eng,float maths,float chem,float science,float biology)
{

average=eng+maths+chem+science+biology;
average=(average/500)*100;
return average;
}  
string calculateGrade(float average)
{
    string grade;
    if(average>=90 && average<=100)
    {
    grade="A+";
    return grade;
    }
    if(average>=80 && average<=90)
    {
    grade="A";
    return grade;
    }
    if(average>=70 && average<=80)
    {
    grade="B+";
    return grade;
    }
    if(average>=60 && average<=70)
    {
    grade="B";
    return grade;
    }
    if(average>=50 && average<=60)
    {
    grade="C";
    return grade;
    }
       if(average>=40 && average<=50)
    {
    grade="D";
    return grade;
    }
    if(average<=40)
    {
    grade="F";
    return grade;
    }

}
main()
{
    string name;
    float eng,maths,chem,science,biology;
    cout <<"Enter student name: ";
    cin >> name;
    cout <<"Enter marks for English: ";
    cin >> eng;
    cout <<"Enter marks for Maths: ";
    cin >> maths;
    cout <<"Enter marks for Chemistry: ";
    cin >> chem;
    cout <<"Enter marks for Social Science: ";
    cin >> science;
    cout <<"Enter marks for Biology: ";
    cin >> biology;
    cout << "Student Name: " << name;
    cout <<"\nPercentage: " << calculateAverage( eng,maths,chem,science,biology);
    cout <<"\nGrade: " << calculateGrade(average);
}