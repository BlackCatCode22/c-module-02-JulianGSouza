//funWithFunctions.cpp
//J.S. 9.3.25


#include <algorithm>
#include<iostream>
#include <ranges>
#include<string>
using namespace std;

// function for adding two ints
int sumTwoInts(int num1, int num2)
{
    cout << "Adding two numbers" << endl;
    cout << num1 + num2 << endl;
}

// reversing a string as a function
string reverseString(string stringReversed)
{
  reverse(stringReversed.begin(), stringReversed.end());
    cout << "Reversed String: " << stringReversed << endl;
}

// comparing 3 numbs to find the largest in a function
int largestOfThree(int num1, int num2, int num3)
{
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
}

// getting and int rom the user
int getAnIntFromTheUser(string userName)
{
    int userInt = 0;
    cout << "Hello, " + userName + " Enter a whole number." << endl;
    cin >> userInt;
    cout << "You entered " << userInt << "." << endl;
}

//comparing two integers
int compareTwoInts(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
}

int main()
{

   compareTwoInts(45, 2);

}