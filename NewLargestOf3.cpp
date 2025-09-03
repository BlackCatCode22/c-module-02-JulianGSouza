//LargestOf3.cpp
//J.S. 8.18.25
//https://www.w3schools.com/cpp/cpp_user_input.asp

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to my adding three ints program." << endl;

    int num1,num2,num3,sumOfNums;
    num1 = 0;
    num2 = 0;
    num3 = 0;
    sumOfNums = 0;

    //getting num1
    cout << "Give me a value for num1: " << endl;
    cin >> num1;
    cout << "You entered " << num1 << " for num1. " << endl;

    //getting num2
    cout << "Give me a value for num2: " << endl;
    cin >> num2;
    cout << "You entered " << num2 << " for num2. " << endl;

    //geting num3
    cout << "Give me a value for num3: " << endl;
    cin >> num3;
    cout << "You entered " << num3 << " for num3. " << endl;

    //finding the largest of the three with an if statement
    if (num1 > num2)
    {
     if(num1 > num3)
         {
         cout << "num1 = " << num1 << " and is the largest int." << endl;
         }
        else
            {
            cout << "num3 = " <<  num3 << " and is the largest int." << endl;
             }
     }
    else
    {
        if(num2 > num3)
        {
            cout << "num2 = " <<  num2 << " and is the largest int." << endl;
        }
        else
        {
            cout << "num3 = " <<  num3 << " and is the largest int." << endl;
        }
    }

    return 0;

}
