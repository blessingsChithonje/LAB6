#include <iostream>
#include <string>
using namespace std;

int main() {
    //  an integer
    int* dynamicInt = new int;

    // string
    string* dynamicString = new string;

    // allow user to assign dynamically allocated integer
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // allow user to assign dynamically allocated string
    cout << "Enter a string value: ";
   // Ignoring newline input
   cin.ignore(); 
    getline(cin, *dynamicString);

    // Output the value dynamically allocated integer and string respectivelly
    cout << "Value of the dynamically allocated integer: " << *dynamicInt << endl;

    cout << "Value of the dynamically allocated string: " << *dynamicString << endl;

    // free dynamically allocated space
    delete dynamicInt;
    delete dynamicString;

    return 0;
}