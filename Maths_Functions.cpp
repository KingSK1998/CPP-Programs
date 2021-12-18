#include <iostream>
#include <cmath>    // Working with MATH functions

using namespace std;

int main()
{
    cout<< "WORKING WITH STRINGS" << endl;
    string characterName = "John";

    // .find() function
    cout << "n after index 0 is " << characterName.find("n", 0) << endl;

    // .substr() function
    string subString;
    subString = characterName.substr(1, 3);
    cout<< "substring starting from 1 up to 3 is " << subString << endl;

    cout<< endl;

    cout<< "WORKING WITH MATH FUNCTION" << endl;
    cout<< "3 Cube " << pow(3,3) << endl;
    cout<< "Square root of 36 " << sqrt(36) << endl;
    cout<< "Rounding Numbers " << round(4.3) << endl;
    cout<< "Ceiling Numbers " << ceil(4.3) << endl;
    cout<< "Floor Numbers " << floor(4.3) << endl;
    cout<< "Bigger Number out of two " << fmax(3, 10) << endl;
    cout<< "Smaller Number " << fmin(3, 10) << endl;

    return 0;
}
