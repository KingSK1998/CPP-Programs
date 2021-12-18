// Working with functions
#include <iostream>

using namespace std;

// If creating functions below main method
// Method declaration is needed
void belowMain(string xyz); 

void sayHi(string name, int age){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

double cube(double num) {
    return num * num * num;
}

// Exponent Function
int power(int baseNum, int powNum){
    int result = 0;
    for(int i = 0; i < powNum; i++){
        result *= baseNum;
    }
    return result;
}

int main()
{
    sayHi("XYZ", 15);
    belowMain("Nightmare");

    // Return types
    double answer = cube(5.0);
    cout << answer << endl;
    cout << cube(3.0) << endl;

    cout << "Exponent Function: " << power(2, 3) << endl;

    return 0;
}

void belowMain(string xyz){
    cout << "belowMain is " << xyz << endl;
}
