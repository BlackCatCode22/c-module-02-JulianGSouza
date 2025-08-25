//reverseAstring.cpp
//J.S. 8.25.25

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Welcome to my reverse string program." << endl;

    //Part 1
    //creating a string to reverse

    string myStrToReverse = "A long string to reverse. ";

    cout << "My string before reversing is: " << myStrToReverse << endl;

    //reversing the string
    reverse(myStrToReverse.begin(), myStrToReverse.end());

    cout << "Reversed String: " << myStrToReverse << endl;

    //Part 2
    //using a for loop to swap chars
    for (int i=0; i<100; i++)
    {
        cout << "The value of i is " << i << endl;
       cout << endl;
    }


}
