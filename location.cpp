

#include <iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);

main(){
    int h, x, y;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    cout << checkPointPosition(h, x, y);
}
string checkPointPosition(int h, int x, int y){
    if(y ==0 && x == 0)
    {
        cout << "Border";
    }
    else if( y ==h && x == 0)
    {
        cout << "Border";
    }
    else if( y== h && x== h )
    {
        cout << "Border";
    }
    else if(y == 0 && x== h)
    {
        cout << "Border";
    }
    else if(y ==h && x==2*h  )
    {
        cout << "Border";
    }
    else if(y ==0 && x==2*h  )
    {
        cout << "Border";
    }
    else if(y ==h && x==3*h )
    {
        cout << "Border";
    }
    else if(y ==0 &&  x==3*h)
    {
        cout << "Border";
    }
    else if(y == 2*h &&  x==h)
    {
        cout << "Border";
    }
    else if( y == 3*h && x==h)
    {
        cout << "Border";
    }
    
    else if(y == 4*h && x==h  )
    {
        cout << "Border";
    }
    else if(y == 2*h &&  x==2*h)
    {
        cout << "Border";
    }
    else if(y == 3*h &&  x==2*h)
    {
        cout << "Border";
    }
    else if(y == 4*h && x==2*h  )
    {
        cout << "Border";
    }
    else if(y < h &&  x < 3*h)
    {
        cout << "Inside";
    }
    else if(y < 4*h && (x > h && x < 2*h ) )
     {
        cout << "Inside";
    }
    else {
        cout << "Outside";
    }
}