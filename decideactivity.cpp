#include<iostream>
using namespace std;
string decideActivity(string temp,string humid)
{
    string result;
    if(temp=="warm" && humid=="dry")
    {
    result="Play tennis";
    return result;
    }
    if(temp=="warm" && humid=="humid")
    {
    result="swim";
    return result;
    }
    if(temp=="cold" && humid=="dry")
    {
    result="Play basketball";
    return result;
    }
    if(temp=="cold" && humid=="humid")
    {
    result="Watch tv";
    return result;
    }
}
main()
{
    string temp,humid;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout <<"Enter humidity (dry or humid): ";
    cin >> humid;
    cout <<"Recommended activity: " <<decideActivity(temp,humid);

}