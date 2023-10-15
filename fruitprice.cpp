#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, float quantity)
{
    if (dayOfWeek == "Sunday" || dayOfWeek == "Saturday")
    {
        float banana, apple, orange, grapefruit, kiwi, pineapple, grapes;
        float bill;
        banana = 2.70;
        apple = 1.25;
        orange = 0.90;
        kiwi = 3.00;
        pineapple = 5.60;
        grapes = 4.20;
        grapefruit = 1.60;
        if (fruit == "banana")
        {
            bill = banana * quantity;
            return bill;
        }
        if (fruit == "apple")
        {
            bill = apple * quantity;
            return bill;
        }
       if (fruit == "orange")
        {
            bill = orange * quantity;
            return bill;
        }
        if (fruit == "kiwi")
        {
            bill = kiwi * quantity;
            return bill;
        }
        if (fruit == "pineapple")
        {
            bill = pineapple * quantity;
            return bill;
        }
        if (fruit == "grapes")
        {
            bill = grapes * quantity;
            return bill;
        }
        if (fruit == "grapefruit")
        {
            bill = grapefruit * quantity;
            return bill;
        }
    }
    else    
    {
        float banana, apple, orange, grapefruit, kiwi, pineapple, grapes;
        float bill;
        banana = 2.50;
        apple = 1.20;
        orange = 0.85;
        kiwi = 2.70;
        pineapple = 5.50;
        grapes = 3.85;
        grapefruit = 1.45;
        if (fruit == "banana")
        {
            bill = banana * quantity;
            return bill;
        }
        if (fruit == "apple")
        {
            bill = apple * quantity;
            return bill;
        }
       if (fruit == "orange")
        {
            bill = orange * quantity;
            return bill;
        }
        if (fruit == "kiwi")
        {
            bill = kiwi * quantity;
            return bill;
        }
        if (fruit == "pineapple")
        {
            bill = pineapple * quantity;
            return bill;
        }
        if (fruit == "grapes")
        {
            bill = grapes * quantity;
            return bill;
        }
        if (fruit == "grapefruit")
        {
            bill = grapefruit * quantity;
            return bill;
        }
    }
}    
main()
{
    string fruit, dayOfWeek;
    float quantity;
    cout << "Enter fruit name: ";
    cin >> fruit;
    cout << "Enter day: ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << calculateFruitPrice(fruit, dayOfWeek, quantity);
}
