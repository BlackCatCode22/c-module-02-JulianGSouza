//stringWarmUp.cpp
//J.S. 8.25.25

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Using string to output text
    string test1 = "Hello, this is my string warm up.";
    cout << test1 << endl;

    //string size
    cout << "Size: " << test1.size() << endl;

    //does the same thing as string.size
    cout << "Length: " << test1.length() << endl;

    //finding the character assigned to spot 3 which starts from 0123
    cout << "test1[3]: " << test1[3] << endl;

    //another way for finding a character
    cout << "test1.at(3): " << test1.at(3) << endl;

    //reassigning a char to a different string
    test1[3] = 'L';
    cout << test1 << endl;

    //adding on to my first string with another string
    test1 = test1 + " My first name is Julian ";
    cout << test1 << endl;

    //another way to add onto a string
    test1 += "and my last name is Souza.";
    cout << test1 << endl;

    //also another way to add onto a string
    test1.append(" Now the test is over.");
    cout << test1 << endl;

    //adding two string variables together
    string test2 = " 444";
    string test3;

    test3 = test1 + test2;
    cout << "test3: " << test3 << endl;

    //checking if a string is empty & testing
    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    //clearing a string & making testing
    test3.clear();
    cout << "test3: " << test3 << endl;
    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

}